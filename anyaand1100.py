t = int(input())

for z in range(t):

    n = input()

    q = int(input())
    arr = list(n)

    for i in range(q):
        m,n = map(str,input().rstrip().split())
        k = int(m)
        arr[k-1]=n
        # print(arr)
        flag = False
        d = len(arr)-3
        for j in range(len(arr)-3):
            # print(j)
            if(arr[j]=='1' and arr[j+2]=='0'):
                if(((int(arr[j])+int(arr[j+1])==2)) and ((int(arr[j+2])+int(arr[j+3])==0))):
                    flag = True
                    break

        if flag:
            print("YES")
        else:
            print("NO")


