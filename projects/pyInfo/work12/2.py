n = int(input("Введите кол-во сообщений: "))
s = ''
s = input("Введите диалог: ").lower()

if len(s) == n and s[0] == 'q' and s.count("q") == s.count("a") and s[-1] != 'q':
    print("+")
else:
    print("-")