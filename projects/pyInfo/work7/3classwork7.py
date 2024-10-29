from random import choice
l = [i for i in input().split()]

if len(l) == 2:
    if len(l[0]) < len(l[1]):
        print(l[1][:len(l)+1])
    else:
        print(choice(l))
else:
    print("Ошибка! Некорректное количество слов")