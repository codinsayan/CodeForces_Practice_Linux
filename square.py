t = int(input())

for z in range(t):
    a,b = map(int,input().rstrip().split())
    c,d = map(int,input().rstrip().split())
    m,n = map(int,input().rstrip().split())
    p,q = map(int,input().rstrip().split())

    l=0

    if a == c:
        l = abs(b-d)
    elif a == m:
        l = abs(b-n)
    else:
        l = abs(b-q)   

    print(l*l) 
    





