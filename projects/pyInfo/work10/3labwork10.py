f = open("file6.txt").read().lower().split()
c = 0
for i in f:
    if 'e' in i:
        c+=1

print(c/len(f)*100)