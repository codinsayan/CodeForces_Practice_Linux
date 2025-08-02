from math import log
 
n = int(input())
 
if(int(log(n,2)) == log(n,2)  or n == 1):
    print(1)
else:
    count = 0
 
    while n>0:
        if n<2:
            count += n
            break
        if n==2:
            count+=1
            break
        p = 2**(int(log(n,2)))
        n = n - p
        count += 1
    print(count)