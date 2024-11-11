f = [i[:-1] for i in open('file4.txt').readlines()]
f[-1] = f[-1] + '0'

unique_scores = list(set(int(i[-2:]) for i in f))
unique_scores.sort(reverse=True) 

mx = unique_scores[0] 
mx1 = unique_scores[1]  

for i in f:
    if str(mx) in i:
        print("Победитель:", i)
    if str(mx1) in i:
        print("Призер:", i)
