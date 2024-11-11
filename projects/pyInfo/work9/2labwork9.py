from random import choice
def check(m):
    for i in range(3):
        if sum(m[i]) != 15:
            return False
    if m[0][0]+m[1][0]+m[2][0] != 15:
        return False
    if m[0][1]+m[1][1]+m[2][1] != 15:
        return False
    if m[0][2]+m[1][2]+m[2][2] != 15:
        return False
    if m[0][0]+m[1][1]+m[2][2] != 15:
        return False
    if m[0][2] + m[1][1]+m[2][0] != 15:
        return False
    return True

flag = False

while flag == False:
    m = []
    for i in range(3):
        m.append([0] * 3)

    number = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    for i in range(3):
        for j in range(3):
            m[i][j] = choice(number)
            number.remove(m[i][j])
    flag = check(m)



for i in range(3):
    for j in range(3):
        print(m[i][j], end=" ")
    print()