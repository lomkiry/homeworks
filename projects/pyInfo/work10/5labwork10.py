f = open('f4.txt', 'r')
s1 = f.read().split('\n')
l = len(s1)

f.close()

s = input("Введите данные которые хотите ввести: ")
s1.insert(l//2, s)

f = open('f4.txt', 'w')
f.write('\n'.join(s1))