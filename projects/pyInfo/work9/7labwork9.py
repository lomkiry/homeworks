matrix = []
l = list(map(int, input("Введите номер ряда и номер места через пробел: ").split()))
n, m = l[0], l[1]
c = 0
while c != n:
    l = input('Вводите строку ряда: ').split()
    if len(l) <= m:
        matrix.append(list(map(int, l)))
        c+=1
    else:
        print(f"Введите до {m} символов.")

for i in range(n):
    while len(matrix[i]) != m:
        matrix[i].append(0)

for i in range(n):
    print(*matrix[i])

num_p = int(input("Введите сколько людей хочет на один ряд: "))
for i in range(n):
    c = 0
    for j in range(m):
        if matrix[i][j] == 0:
            c+=1
    if c >= num_p:
        print(i+1)
        exit()
else:
    print(0)