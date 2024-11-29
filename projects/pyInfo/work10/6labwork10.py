def de_crypt(s):
    for i in range(len(s)):
        s[i] = s[i][::-1]
    return ' '.join(s)

flag = input("Выберите функцию\n1)Зашифровать файл\n2)Дешифровать файл\n>>> ")

if flag == '1':
    file_name = input("Введите название файла: ")
    f = open(file_name, 'r')
    s = de_crypt(f.read().split())
    print("Ваш зашифрованный файл:", s)
    f = open(file_name, 'w')
    f.write(s)
elif flag == '2':
    file_name = input("Введите название файла: ")
    f = open(file_name, 'r')
    s = de_crypt(f.read().split())
    print("Ваш дешифрованный файл:", s)
    f = open(file_name, 'w')
    f.write(s)
else:
    print("Нет такого значения")