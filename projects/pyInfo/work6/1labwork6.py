arr = []

while True:
    rost = int(input("Введите рост человека(что бы завершить введите 0): "))
    if rost == 0: 
        if len(arr) >=2:
            break
    elif rost > 0:
        arr.append(rost)

print("Самый высокий человек с ростом:", max(arr))
print("Самый низкий человек с ростом:", min(arr))