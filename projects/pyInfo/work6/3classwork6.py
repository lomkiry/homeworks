print("Зоопарк")

print('''1. Малышам до 2 лет - бесплатно.
2. Детям от 3 до 12 лет - 100 рублей.
3. Пенсионерам старше 65 лет - 120 рублей.
4. Всем остальным (от 13 до 65 лет) - 200 рублей.''')
ages = []
age = -1
while age != 0:
    age = int(input("Введите возраст: "))
    ages.append(age)

total = 0

for i in ages:
    if i <= 2:
        total = total + 0
    elif 3 <= i <= 12:
        total = total + 100
    elif i >= 65:
        total = total + 120
    else:
        total = total + 200

print("Итоговая стоимость билетов:", total)