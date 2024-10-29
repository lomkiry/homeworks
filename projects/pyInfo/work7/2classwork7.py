s = input("Слова робата: ")
mid = len(s)
if mid % 2 != 0:
    mid+=1

mid//=2
print(s[mid:]+s[:mid])