from random import randint

matrix = [
    ['.', '.', '.', '.'],
    ['.', '.', '.', '.'],
    ['.', '.', '.', '.'],
    ['.', '.', '.', '.']
]
c = 0
matrix_ = [
    ['.', '.', '.', '.'],
    ['.', '.', '.', '.'],
    ['.', '.', '.', '.'],
    ['.', '.', '.', '.']
]
for i in range(4):
    print(*matrix_[i])   
for i in range(4):
    matrix[i][randint(0, 3)] = 'X'

n, m = randint(0, 3), randint(0, 3)

while matrix[n][m] == 'X':
    n, m = randint(0, 3), randint(0, 3)

matrix[n][m] = 'b'
n = 0
while 'X' in matrix[0] or 'X' in matrix[1] or 'X' in matrix[2] or 'X' in matrix[3]:
    n = list(map(int, input("Введите координаты(строка и столбец через пробел от 1 до 4): ").split()))
    n[0], n[1] = n[0]-1, n[1]-1
    if matrix[n[0]][n[1]] == 'b':
        matrix_[n[0]][n[1]] = 'b'
        for i in range(4):
            print(*matrix_[i])
        print("Вы попали в бомбу и програли.")
        exit()
    elif matrix[n[0]][n[1]] == 'X':
        matrix[n[0]][n[1]] = '.'
        matrix_[n[0]][n[1]] = 'X'
        print("Попали")
        for i in range(4):
            print(*matrix_[i])
        c+=1
    elif matrix[n[0]][n[1]] == '.':
        print("Промазали(")
        matrix_[n[0]][n[1]] = 'q'
        for i in range(4):
            print(*matrix_[i])        

print("Победа!!")
print("Вы победили за", c, 'попыток')