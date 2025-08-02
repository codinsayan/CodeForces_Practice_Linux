t = int(input())

for z in range(t):
    a,b = map(int,input().rstrip().split())
    if a%b != 0:
        k = b - (a%b)
    else:
        k = 0
    print(k)