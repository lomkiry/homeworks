age = int(input("Введите кол-во собачих годов: "))

if age == 1:
    print("Введенный вами год эквивалентен 10.5 человеческим")
elif age == 2:
    print("Введенный вами год эквивалентен 21 человеческим")
elif age > 2:
    print(f"Введенный вами год эквивалентен {21 + (age-2)*4} человеческим")
else:
    print("Ошибка!")