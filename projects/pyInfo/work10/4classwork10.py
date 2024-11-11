s = open("file3.txt").read()
l = s.split()
result = []

for i in range(len(l)):
    if i == 0 or l[i] != l[i - 1]:
        result.append(l[i])

s = ' '.join(result)

f = open("res_task3.txt", 'w')
f.write(s)
