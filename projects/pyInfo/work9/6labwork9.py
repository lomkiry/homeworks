n = int(input("Введите n x n матричность: "))

matrix=[]
nmatrix=[]

for _ in range(n):
    nstroka=input("Введите строку матрицы: ").split()
    stroka=[int(i) for i in nstroka]
    matrix.append(stroka)
    nmatrix.append(nstroka)

k=n-1

for i in range(n):
    nmatrix[k][i]=matrix[i][i]
    nmatrix[i][i]=matrix[k][i]
    k-=1

print("Вот ваша матрица: ")
for i in nmatrix:
    print(*i)