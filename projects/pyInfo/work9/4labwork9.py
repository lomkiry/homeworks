def show_menu(m):
    for i in m:
        print(f"Название блюда: {i[0]}. Ингредиенты: {' '.join(i[1])}. Цена: {i[2]}р.")

def searh_in_menu(m):
    s = input("Введите название блюда: ")
    for i in m:
        if s.lower() == i[0].lower():
            print(f"Название блюда: {i[0]}. Ингредиенты: {' '.join(i[1])}. Цена: {i[2]}р.")
            return 0
    else:
        print("Нет такого блюда.")
        
def add_to_menu(m):
    name = input("Введите название блюда: ")
    ingredients = input("Вводите ингредиенты блюда через пробел: ").split()
    while True:
        try:
            cost = int(input("Введите цену блюда: "))
            break
        except:
            print("Введите число.")
    item = [name, ingredients, cost]
    m.append(item)
    return m

def change_cost_by_name(m):
    n = input("Введите название блюда которое хотите изменить: ").lower()
    for i in range(len(m)):
        if m[i][0].lower() == n:
            n_cost = int(input("Введите новую цену: "))
            m[i][2] = n_cost
    return m

menu = [
    ["Пицца Маргарита", ["мука", "томаты", "сыр", "базилик"], 10],
    ["Салат Цезарь", ["салат", "курица", "сыр", "сухарики"], 8],
    ["Суп Томатный", ["томаты", "лук", "морковь", "картофель"], 6]
]
print("Добро пожаловать шеф повар")
while True:
    print("У нас есть функции:")
    print("1. Отобразить меню ресторана")
    print("2. Найти блюдо по названию и отобразить его ингредиенты и цену. (Вы вводите название блюда).") 
    print("3. Добавить новое блюдо в меню.")
    print("4. Изменить цену блюда (Вы вводите название и новую цену).")
    print("5. Выйти из программы")
    n = input("Введите какую функцию использовать: ")
    print()
    if n == '1':
        show_menu(menu)
        print()
    elif n == '2':
        searh_in_menu(menu)
        print()
    elif n == '3':
        add_to_menu(menu)
        print()
    elif n == '4':
        change_cost_by_name(menu)
        print()
    elif n == '5':
        print("Работа завершена.")
        break
    else:
        print("Вы ввели неправильно.")
        print()