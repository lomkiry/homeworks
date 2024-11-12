m = [i for i in list(open('file8.txt').read().split())]
f = [i for i in list(open('file7.txt').read().split())]

k = int(input())

if input().lower() == 'м':
    flag = True
else:
    flag = False

for i in range(0,k*2,2):
    if flag:
        print(m[i])
    else:
        print(f[i])