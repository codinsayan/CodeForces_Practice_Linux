s = input()

V = ["A", "O", "Y", "E", "U", "I","a","o","y","e","u","i"]
L = list(s)
ans = []
k = len(L)

for i in range(0,k):
    # print(L[i] in V)
    if ((L[i] in V) == True):
        # print("hi")
        continue
    elif (L[i].isupper() == True):
        ans.append('.')
        ans.append(L[i].lower())
    else :
        ans.append('.')
        ans.append(L[i])

p = ''
for i in ans:
    p += i

print(p)




