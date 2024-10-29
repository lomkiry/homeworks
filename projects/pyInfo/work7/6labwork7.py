s = input("Ввдеите зашифровонное слово: ")

if s[-1] != '#':
    print("Ошибка! Отсутствует символ #")
    exit()

s = s[:-1]

length = len(s)
dec = [None]*length

left, right = 0, length - 1

for i in range(length):
    if i % 2 == 0:
        dec[left] = s[i]
        left += 1
    else:
        dec[right] = s[i]
        right -= 1
        
print(''.join(dec))