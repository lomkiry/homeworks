matrix = []
l = list(map(int, input("Введите n матрицы и m матрицы через пробел: ").split()))
n, m = l[0], l[1]
c = 0
while c != n:
    l = input('Вводите строку матрицы: ').split()
    if len(l) <= m:
        matrix.append(list(map(int, l)))
        c+=1
    else:
        print(f"Введите до {m} символов.")

for i in range(n):
    while len(matrix[i]) != m:
        matrix[i].append(0)

for i in range(0, m):
    for j in range(0, n):
        print(matrix[j][i], end=' ')
    print()

