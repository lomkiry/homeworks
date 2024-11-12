def de_crypt(s):
    for i in range(len(s)):
        s[i] = s[i][::-1]
    return s

flag = input("Выберите функцию\n1)Зашифровать файл\n2)Дешифровать файл\n>>> ")

if flag == '1':
    s = open(input("Введите название файла: ")).read().split()
    print(*de_crypt(s))
elif flag == '2':
    s = open(input("Введите название файла: ")).read().split()
    print(*de_crypt(s))
else:
    print("Нет такого значения")