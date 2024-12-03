import PySimpleGUI as sg
from random import randint

sg.theme("Default")

layout = [
    [sg.Image("C:/Users/user/Desktop/random.png")],
    [sg.Text("Границы рандома:"), sg.InputText(key='--low--', size=(25, 0)), sg.Text(":"), sg.InputText(key='--high--', size=(25, 0))],
    [sg.Button("Сгенерировать", size=(66, 5), button_color='green')],
    [sg.Text(''), sg.Text('', key='--res--')]
]

window = sg.Window("Рандомайзер", layout=layout)

while True:
    event, value = window.read()

    if event == sg.WIN_CLOSED:
        break
    
    if event == 'Сгенерировать':
        try:
            num1 = int(value['--low--'])
            num2 = int(value['--high--'])
        except:
            sg.popup("Введите число.")
    if num1 <= num2:
        num = str(randint(num1, num2))
        window['--res--'].update('Ваше число: ' + num)
    else:
        sg.popup("Первое число должно быть меньше или равно второму.")
window.close()
