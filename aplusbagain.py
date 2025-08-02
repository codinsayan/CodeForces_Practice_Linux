t = int(input())

for z in range(t):
    
    n = int(input())
    sum = 0

    for i in range(2):
        p = n%10
        sum+=p
        n = n // 10

    print(sum)


        