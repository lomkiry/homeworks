andry_len = int(input("Введите рост андрея: "))
max_l = 0
l = [int(i) for i in input("Введите рост остальных: ").split()]
print(l)
if andry_len in l:
    l.append(andry_len)
    l = sorted(l, reverse=True)
    for i in range(len(l)-1):
        if l[i] == l[i+1] == andry_len:
            max_l = max(max_l, i+1)
    print("Место андрея в строю:", max_l+1)
else:
    l.append(andry_len)
    l = sorted(l, reverse=True)
    print("Место андрея в строю:", l.index(andry_len)+1)
