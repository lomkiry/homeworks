f = [i[:-1] for i in open('file4.txt').readlines()]
f[-1] = f[-1]+'0'
print(f)
mx = 0
for i in f:
    if int(i[-2:]) > mx:
        mx = int(i[-2:])

for i in f:
    if str(mx) in i:
        print("Победитель:", i)