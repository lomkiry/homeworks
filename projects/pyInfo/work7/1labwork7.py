s = input("Введите текст с повторами: ")
l = s.split()
result = []

for i in range(len(l)):
    if i == 0 or l[i] != l[i - 1]:
        result.append(l[i])

s = ' '.join(result)
print(s)
