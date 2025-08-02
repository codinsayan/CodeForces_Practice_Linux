t = int(input())

for z in range(t):
    
    s = [int(x) for x in list(input())]
    
    S = sum(s)
    count2 = s.count(2)
    count3 = s.count(3)
    
    flag = True
    for i in range(count2 + 1):
        if flag:
            for j in range(count3 + 1):
                if ((S + i*2 + j*6)%9 == 0):
                    print("YES")
                    flag = False
                    break
        else: 
            break
                
    if flag:
        print("NO")

