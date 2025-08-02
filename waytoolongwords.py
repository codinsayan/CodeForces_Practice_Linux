n = int(input())

for z in range(n):
    x = input()
    s = ""
    m = len(x)
    
    if m>10:
        s = x[0]+str(len(x[1:m-1]))+x[m-1]
        print(s)
    else:
        print(x)