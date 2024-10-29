l = [i for i in input("Введте список данных: ").split()]
letters = []
digits = []

for i in l:
    if i.isalpha():
        letters.append(i)
    elif i.isdigit():
        digits.append(i)

print(*letters)
print(*digits)