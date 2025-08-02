from math import comb,ceil

n = int(input())
if (n%2 == 0 and n>=6):
    n //= 2
    ans = 0
    if (n>3) :
        ans = ceil((comb(n+1,1)-3)/2)
    elif(n==3):
        ans = comb(n+1,1)-3

    print(int(ans))
else:
    print(0)