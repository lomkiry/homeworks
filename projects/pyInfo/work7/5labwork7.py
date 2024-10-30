l = input("Введите хайку: ").lower().split('/')

vocals = 'уеыаоэяию'
flag = True
if len(l) == 3:
    for i in range(len(l)):
        c = 0
        for j in l[i]:
            if j in vocals:
                c+=1
        if i == 1:
            if c != 7:
                flag = False
                break
        else:
            if c != 5:
                flag = False
                break
else:
    print("Не хайку. Должно быть 3 строки.")
    exit()
if flag:
    print("Хайку!")
else:
    print("Не хайку(")