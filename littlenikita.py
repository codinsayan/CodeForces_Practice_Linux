t = int(input())

for z in range(t):
    n,m = map(int,input().rstrip().split())

    if n>=m:
        if (n-m)%2 == 0:
            print("Yes")
    else:
        print("No")
