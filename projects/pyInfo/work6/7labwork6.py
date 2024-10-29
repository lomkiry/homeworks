print("Проверка на счастливый билет")

n = input("Введите номер билета: ")

if len(n) != 6:
    print("Нельзя проверить")
else:
    if sum(int(i) for i in n[0:3]) == sum(int(i) for i in n[3:6]):
        print("Поздравляю! Ваш билет - счастливый")
    else:
        print("Обычный билет")