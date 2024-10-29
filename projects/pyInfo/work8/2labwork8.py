from random import randint

lucky = sorted([randint(1,  49) for i in range(6)])

print("Введите числа с лотерейного билета: ", end='')

l = sorted([int(i) for i in input().split()])
if l == lucky:
    print("победа")
    print(*lucky)
else:
    print("не победа")
    print(*lucky)