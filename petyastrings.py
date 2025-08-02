n = input()
m = input()
p = len(n)

flag=True
k, l = "", ""
for i in range(p):
    if n[i].isupper()==True:
        k = n[i].lower()
    else:
        k = n[i]
    if m[i].isupper()==True:
        l = m[i].lower()
    else:
        l = m[i]
    
    if k == l:
        pass
    else:
        flag = False
        if k < l:
            print(-1)
            break
        else:
            print(1)
            break
if flag == True:
    print(0)