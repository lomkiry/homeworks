from random import randint
print("Игра в угадай число!")
def yn():
    print("Хотите сыграть еще раз?")
    while True:
        n = input("Y/N > ").lower()
        if n == 'n':
            print("Пока(")
            return 0
        elif n == 'y':
            print("Продолжаем!")
            return 1
        else:
            print("Ошибка!")
    
def game():
    c = 1
    secret = randint(1, 10)
    while True:
        n = input(f"Попытка: {c} > ")
        if n.isdigit():
            n = int(n)
            c+=1
            if n > secret:
                print("Меньше!")
            elif n < secret:
                print("Больше!") 
            else:
                print("Победа!!!!")
                return yn()
        else:
            print("Ошибка!")


while True:
    if game() == 1:
        game()
    else:
        break
