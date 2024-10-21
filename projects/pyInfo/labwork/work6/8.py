b = input("Введите двоичное число: ")
step = 0
total = 0

for i in range(len(b)-1, -1, -1):
    if b[i] == '1':
        total = total + 2**step
    step+=1
print(total)