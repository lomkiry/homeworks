f = open("file1.txt")

firstl = f.readline()

for i in firstl:
    if i in ".,!:;-":
        firstl = firstl.replace(i, '', 1)

words = firstl.split()

maxword = max(map(len, words))
minword = min(map(len, words))
for i in words:
    if len(i) == maxword:
        print(i)
        break

for i in words:
    if len(i) == minword:
        print(i)
        break

while 'все' in words:
    words.remove("все")

print(*words)