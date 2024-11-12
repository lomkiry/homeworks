f5 = open('file5.txt').read()
f6 = open('file6.txt').read()

if 'Academy' in f5:
    print("В f5")
elif 'Academy' in f6:
    print("В f6")
else:
    print("нигде")
