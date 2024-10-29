n = int(input("Введите n: "))
arr = list(range(1, n+1))
total = 0
for i in arr:
    total = total + i*i

print("Ваше число:", total)