matrix = []
l = list(map(int, input("Введите n матрицы и m матрицы через пробел: ").split()))
n, m = l[0], l[1]

for i in range(n):
    matrix.append([0] * m)

for i in range(n):
    matrix[i][0] = 1
for i in range(m):
    matrix[0][i] = 1

for i in range(1, n):
    for j in range(1, m):
        matrix[i][j] = matrix[i-1][j] + matrix[i][j-1]

for i in range(n):
    for j in range(m):
        print(str(matrix[i][j]) + ' '*(6-len(str(matrix[i][j]))), end='')
    print()