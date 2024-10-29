def can(arr):
    if int(arr[1]) - int(arr[0]) >=2:
        return True
    return False

l = [input("Введите кол-во людей в комнате и макс число людей в комнате(формат 'число число'): ").split() for _ in range(int(input("Введите число свободных комнат: ")))]

total = 0

for i in l:
    if can(i):
        total+=1
print(total)