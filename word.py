s = input()
countU, countL = 0, 0
s1 = ""

for i in s:
    if i.isupper():
        countU += 1
    if i.islower():
        countL += 1

if countU>countL:
    for j in s:
        k = j.upper()
        s1+=k
else:
    for j in s:
        k = j.lower()
        s1+=k

print(s1)
