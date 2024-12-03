n = int(input("Введите кол-во людей в экипаже: "))
ep = ['woman', 'child', 'man', 'captain']
l = []
c = 0
cap = 0
while c < n:
    s = input("Введите члена экипажа: ").split()
    if (s[1] in ep) and (1 <= len(s[0]) <= 10) and cap < 2:
        if s[1] == ep[3]:
            cap+=1
        l.append(s)
        c+=1
    else:
        print('Ошбика ввода.')

for i in l:
    if i[1] == ep[0] or i[1] == ep[1]:
        print(i[0])

for i in l:
    if i[1] == ep[2]:
        print(i[0])

for i in l:
    if i[1] == ep[3]:
        print(i[0])