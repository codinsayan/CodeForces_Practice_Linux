s = input()
t = input()

a = [0 for k in range(26)]
b = [0 for k in range(26)]
c = []

for i in range(len(s)):
    a[ord(s[i])-97] += 1
for i in range(len(t)):
    b[ord(t[i])-97] += 1

a[ord(s[0])-97] -= 1
b[ord(t[len(t)-1])-97] -= 1 


flag = True
for i in range(26):
    if(a[i]>0 and b[i]>0):
        flag = False
        c.append(chr(97+i))
    else:
        if flag:
            flag = True

if flag:
    print(-1)
else:
    p,q = [],[]
    m = s[1:]
    n = t[:len(t)-1]

    for i in range(len(c)):
        p.append(m.index(c[i]))
        q.append(len(n)-n.rindex(c[i]))

    min = 500000
    k = ''

    for i in range(len(p)):
        if (p[i]+q[i]<min):
            min = p[i]+q[i]
            k = s[:m.index(c[i])+2] + t[n.rindex(c[i])+1:]
    print(k)