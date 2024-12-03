import PySimpleGUI as sg


points = 0
dict = {
    'aeilnorstu': 1,
    'dg': 2,
    'bcmp': 3,
    'fhvwy': 4,
    'k': 5,
    'jx': 8,
    'qz': 10
}

sg.theme('DarkGrey10')

layout = [
    [sg.Image(filename='xz.png',subsample=2)],
    [sg.Text('Введите фразу: ', font=('Helvetica', 15)), sg.Input(key='-TEXT-', font=('Helvetica', 15), size=(20, 1), border_width=1)],
    [sg.Text(f'Сумма очков = {points}', key='-POINTS-', font=('Helvetica', 15))],
    [sg.Button('Проверить сумму', font=('Helvetica', 15)), sg.Button('Выход', font=('Helvetica', 15))]
]

window = sg.Window('Игра Эрудит', layout)

while True:
    event, values = window.read()

    if event in (sg.WINDOW_CLOSED, 'Выход'):
        break

    if event == 'Проверить сумму':
        points = 0
        text = values['-TEXT-'].lower()

        for i in text:
            for j in dict:
                if i in j:
                    points += dict[j]

        window['-POINTS-'].update(f'Сумма очков = {points}')


window.close()