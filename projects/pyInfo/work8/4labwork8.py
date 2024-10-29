l = [int(i) for i in input("Вводите числа: ").split()]

print("Среднее значение:", sum(l)/len(l), end='\n')
print("Числа меньше ср. значения:", *[i for i in l if i < sum(l)/len(l)], end='\n')
print("Число равное ср. значению:", *[i for i in l if i == sum(l)/len(l)], end='\n')
print("Числа больше ср. значения:", *[i for i in l if i > sum(l)/len(l)], end='\n')