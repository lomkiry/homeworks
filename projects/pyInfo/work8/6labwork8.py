from random import choice
l = ['O', 'Р']
res = []
c = 0
while 'OOO' not in ''.join(res) or "РРР" not in ''.join(res):
    res.append(choice(l))
    c+=1

print(*res, 'Попыток:', c)