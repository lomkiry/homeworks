l = input('Введите матч: ')

commands = l.split("-")
score = l.split(":")
commands[1] = commands[1][:commands[1].index(" ")]
score[0] = score[0][score[0].rfind(' ')+1:]
print(commands)
print(score)
if score[0] > score[1]:
    print(commands[0])
elif score[1] > score[0]:
    print(commands[1])
else:
    print("Ничья")