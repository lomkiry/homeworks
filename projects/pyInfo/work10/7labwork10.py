from random import choice

f = open(input('Введите название файла: ')).read().split()
s1 = ''
s2 = ''
while not (len(s1) > 2) and not (len(s2) > 2) and not (8 <= len(s1+s2) <= 10):
    s1 = choice(f)
    s2 = choice(f)

print(s1.capitalize()+s2.capitalize())