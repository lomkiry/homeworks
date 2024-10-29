def check(card_num):
    dig = [int(i) for i in str(card_num)][::-1]

    total = 0

    for i in range(len(dig)):
        if i % 2 == 0:
            total += dig[i]
        else:
            doubled_digit = dig[i] * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            total += doubled_digit

    return total % 10 == 0

card = int(input("Введите номер карты: "))

if check(card):
    print("Корректный номер")
else:
    print("Некорректный номер")