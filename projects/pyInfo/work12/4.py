import PySimpleGUI as sg

def reverse(n):
    res = ''
    if n < 0:
        n = str(bin(n))[3:].zfill(8)
    else:
        n = str(bin(n))[2:].zfill(8)
    for i in n:
        if i == '0':
            res+='1'
        else:
            res+='0'
    return res

def augmented(n):
    res = ''
    n = ('0x' + str(reverse(n)))
    n = int(n[2:], 2)
    n+=1
    return str(bin(n))[2:].zfill(8)

def direct(n):
    res = ''
    if n < 0:
        b = str(str(bin(n))[3:].zfill(8))
    else:
        b = str(str(bin(n))[2:].zfill(8))
    if b[0] == '1':
        if n > 0:
            b = '0' + b[0:]
    else:
        if n < 0:
            b = '1' + b[0:]
    return b[2:].zfill(8)


layout = [
    [sg.Text("Программа для предсавления чисел в двоичном коде")],
    [sg.Text("Введите число от -128 до 127:"), sg.InputText(key='--num--', size=(9, 0))],
    [sg.Text('', key='direct')],
    [sg.Text('', key='augmented')],
    [sg.Text('', key='reverse')],
    [sg.Button("Вывести")]
]

window = sg.Window("Предсавления чисел в двоичном коде", layout=layout)

while True:

    event, value = window.read()

    if event == sg.WIN_CLOSED:
        break

    if event == 'Вывести':
        while True:
            try:
                num = int(value['--num--'])
                break
            except:
                sg.popup_ok("Введите число")
                event, value = window.read()
                if event == sg.WIN_CLOSED:
                    break
        
        if -128 <= num <= 127:
            window['direct'].update('Число в прямом коде: ' + direct(num))
            window['augmented'].update("Число в дополнительном коде: " + augmented(num))
            window['reverse'].update("Число в обратном коде: " + reverse(num))
        else:
            sg.popup_ok("Введите в диапозоне от -128 до 127")
            


window.close()