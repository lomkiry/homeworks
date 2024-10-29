s = input("Введите отзыв: ")

while 'не плохой' in s or 'не плоха' in s:
    if 'не плохой' in s:
        s = s.replace("не плохой", 'хороший')
    if 'не плоха' in s:
        s = s.replace("не плоха", 'хороша')

print(s)