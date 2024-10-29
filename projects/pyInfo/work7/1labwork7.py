s = input("Введите текст с повторами: ")
l = s.split()

for i in l:
    se = i+' '+i
    if se in s:
        s = s.replace(se, i)
print(s)