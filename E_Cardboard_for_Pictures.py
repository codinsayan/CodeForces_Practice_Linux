def solve():

    n, c= map(int,input().rstrip().split())
    arr = list(map(int, input().rstrip().split()))

    sum = 0
    sq = 0
    for i in arr:
        sum+=i
        sq+=i*i

    ans = (-sum+((sum*sum+n*(c-sq)))**(1/2))/(2*n)
    print(int(ans))
    


for z in range(int(input())):
    solve()