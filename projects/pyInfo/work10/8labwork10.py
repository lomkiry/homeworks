l = [int(i) for i in input('Введите два числа через пробел: ').split()]

for i in range(l[0]):
    if i % 2 == 0:
        print('#'*l[1])
    else:
        if (i//2) % 2 == 0:
            print('.' * (l[1] - 1) + '#')
        else:
            print('#' + '.' * (l[1] - 1))