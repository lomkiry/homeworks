kords = []
m = 10**99999
k_s = int(input('Введите количество сокровищ: '))
print("Введите координаты сокровищ: ")
for _ in range(k_s):
    a, b = input().split()
    a = int(a)
    b = int(b)
    kords.append([a, b])
a, b = input('Координаты Александра: ').split()
k_a=[int(a), int(b)]

for i in kords:
    put = (max(i[0], k_a[0]) - min(i[0], k_a[0]))**2 + ((max(i[1], k_a[1]) - min(i[1],k_a[1]))**2)**0.5
    if m > put:
        m = put
        otvet = i

print(*otvet)