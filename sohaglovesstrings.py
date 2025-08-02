t = int(input())

for z in range(t):

    s = input()
    n = len(s) 
    p = ''
    q = ''

    flag = True

    if(n>2):
        for i in range(n-2):
            p = s[i:i+3]
            q = s[i:i+2]
            Lq = [0 for k in range(2)]

            if (p[0]!=p[1] and p[1]!=p[2] and p[2]!=p[0]):
                print(p)
                flag = False
                break
            elif((q[0]==q[1])):
                print(q)
                flag = False
                break
            else:
                flag = True
        if flag:
            if(s[n-2]==s[n-1]):
                print(s[n-2:n])
                flag = False
    elif(n==2):
        if(s[0]==s[1]):
            print(s)
            flag = False
    else:
        flag = True
    
    if flag:
        print(-1)
