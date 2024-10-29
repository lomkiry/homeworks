from random import choice
alph = {
    'lowercase': 'abcdefghijklmnopqrstuvwxyz',
    'uppercase': 'ABCDEFGHIJKLMNOPQRSTUVWXYZ',
    'digits': '0123456789',
    'punctuation': r"""!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~"""
}
tot_alph = ''
passw = ''
n = int(input("Введите желаемую длину пароля: "))
y_n = input("Нужны ли заглавные буквы (да/нет): ").lower()
if y_n == 'да':
    tot_alph = tot_alph + alph["uppercase"]
y_n = input("Нужны ли строчные буквы (да/нет): ").lower()
if y_n == 'да':
    tot_alph = tot_alph + alph["lowercase"]
y_n = input("Нужны ли цифры (да/нет): ").lower()
if y_n == 'да':
    tot_alph = tot_alph + alph["digits"]
y_n = input("Нужны ли специальные символы (да/нет): ").lower()
if y_n == 'да':
    tot_alph = tot_alph + alph["punctuation"]

for _ in range(n):
    passw = passw + choice(tot_alph)

print(passw)