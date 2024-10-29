string = input("Введите строку: ")
totals = ''
for i in string:
    if i.isdigit():
        pass
    else:
        totals+=i

print("Ваша строка:", totals)
