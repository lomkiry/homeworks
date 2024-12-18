import PySimpleGUI as sg

def update_shop(shop: list, book: str, name: str, num: int) -> list:
    shop.append([book, name, num]) 
    return shop

def search_by_name(books: list, name: str) -> list:
    result = [book for book in books if name.lower() in book[0].lower()]
    return result

def search_by_author(books: list, author: str) -> list:
    result = [book for book in books if author.lower() in book[1].lower()]
    return result

def read_from_file(file_name: str) -> list:
    shop = []
    with open(file_name, 'r', encoding='utf-8') as books_f:
        for line in books_f:
            books = line.strip().split(';')
            shop.append([books[0], books[1], int(books[2])])
    return shop

def update_file(file_name: str, shop: list):
    with open(file_name, 'w', encoding='utf-8') as books_f:
        for book, author, num in shop:
            books_f.write(f'{book};{author};{num}\n')

layout_file = [
    [sg.Text("Введите название файла с базой данных.")],
    [sg.Text("Они должны находиться в одной папке.")],
    [sg.Text("Или введите путь к файлу")],
    [sg.Text("Ввод"), sg.InputText(key='--FILE--')],
    [sg.Button("Отправить")]
]

window_file = sg.Window('Ввод базы данных', layout_file, size=(400, 150))

while True:
    event, values = window_file.read()

    if event == sg.WIN_CLOSED:
        break

    elif event == 'Отправить':
        try:
            shop = read_from_file(values['--FILE--'])
            break
        except:
            sg.Popup("Неверный путь к базе данных")

window_file.close()


search_results = []

sg.theme('DarkGrey10')

layout = [
    [sg.Table(values=shop,
              headings=["Название", "Автор", "Количество"],
              key="-TABLE-",
              col_widths=[20, 20, 10],
              auto_size_columns=True,
              justification='center',
              expand_x=True,
              size=(50, 10))],
    [sg.Text('                         '), sg.Button("Добавить книгу"), sg.Button("Удалить книгу"), sg.Button("Продать книгу"), sg.Button("Поиск"), sg.Button("Сохранить изменения")],
    [sg.Text("", size=(50, 1), justification="center", text_color="red", key="info")]
]

window = sg.Window("Книжный магазин", layout, size=(800, 230))

def update_table():
    window["-TABLE-"].update(values=search_results if search_results else shop)

def add_book_popup():
    global shop
    add_layout = [
        [sg.Text("Введите название книги:"), sg.InputText(key="book_name")],
        [sg.Text("Введите автора книги:"), sg.InputText(key="book_author")],
        [sg.Text("Введите количество книг:"), sg.InputText(key="book_quantity")],
        [sg.Button("Добавить")]
    ]

    add_window = sg.Window("Добавить книгу", add_layout)

    while True:
        event, values = add_window.read()

        if event == sg.WIN_CLOSED:
            add_window.close()
            return

        if event == "Добавить":
            book_name = values["book_name"].strip()
            book_author = values["book_author"].strip()
            try:
                book_quantity = int(values["book_quantity"].strip())
                if book_quantity <= 0:
                    raise ValueError("Количество должно быть больше 0.")
            except ValueError as e:
                window["info"].update(f"Ошибка: {e}")
                continue

            if book_name and book_author:
                shop = update_shop(shop, book_name, book_author, book_quantity)
                update_table()
                window["info"].update(f"Книга '{book_name}' добавлена в магазин.")
                add_window.close()
                return
            else:
                window["info"].update("Ошибка: Все поля должны быть заполнены.")

def search_popup():
    global search_results
    search_layout = [
        [sg.Text("Выберите тип поиска:")],
        [sg.Radio("По названию", "search_type", key="name"), sg.Radio("По автору", "search_type", key="author")],
        [sg.Text("Введите запрос:"), sg.InputText(key="-SEARCH-")],
        [sg.Button("Поиск"), sg.Button("Отмена"), sg.Button("Вернуться к основному списку")]
    ]

    search_window = sg.Window("Поиск книги", search_layout)

    while True:
        event, values = search_window.read()

        if event == sg.WIN_CLOSED or event == "Отмена":
            search_window.close()
            return

        if event == "Поиск":
            query = values["-SEARCH-"]
            if values["name"]:
                search_results = search_by_name(shop, query)
            elif values["author"]:
                search_results = search_by_author(shop, query)

            if search_results:
                window["info"].update(f"Найдено {len(search_results)} книг")
            else:
                window["info"].update("Книги не найдены")

            update_table()

        if event == "Вернуться к основному списку":
            search_results.clear()
            update_table()

def delete_book(index):
    global search_results, shop
    if search_results:
        del shop[shop.index(search_results[index])]
        del search_results[index]
    else:
        del shop[index]
    update_table()

def sell_book(index):
    global search_results, shop
    if search_results:
        book = search_results[index]
        book[2] -= 1
        if book[2] <= 0:
            delete_book(index)
    else:
        shop[index][2] -= 1
        if shop[index][2] <= 0:
            delete_book(index)
    update_table()

while True:
    event, values = window.read()

    if event in (sg.WIN_CLOSED, None):
        update_file("books.txt", shop)
        break

    elif event == "Поиск":
        search_popup()

    elif event == "Добавить книгу":
        add_book_popup()

    elif event == "Удалить книгу":
        selected_row = values["-TABLE-"]
        if selected_row:
            delete_book(selected_row[0])

    elif event == "Продать книгу":
        selected_row = values["-TABLE-"]
        if selected_row:
            sell_book(selected_row[0])

    elif event == "Сохранить изменения":
        update_file("books.txt", shop)
        window["info"].update("Изменения сохранены")

window.close()
