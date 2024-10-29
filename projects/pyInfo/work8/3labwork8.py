l = [int(i) for i in input("Введите элементы списка: ").split()]

for i in range(1, len(l)):
    if l[i] > l[i-1]:
        print(l[i], end=' ')