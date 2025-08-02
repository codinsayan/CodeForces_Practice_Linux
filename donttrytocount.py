t = int(input())

for z in range(t):

    n,m = map(int, input().rstrip().split())

    x = input()
    s = input()
    flag = True
    for i in range(6):
        if s in x:
            print(i)
            flag = False
            break
        x += x
    if(flag):
        print(-1)