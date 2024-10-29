l = [input("Введите слово: ") for i in range(int(input("Введите кол-во слов: ")))]
total = []
for i in l:
    s = ''
    if len(i) > 10:
        s = i[0] + str(len(i[1:-2])+1) +i[-1]
        total.append(s)
    else:
        total.append(i)
print(*total)