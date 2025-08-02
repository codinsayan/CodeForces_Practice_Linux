L = [3,2,1]

arr = list(map(int, input().rstrip().split()))

for i in L:
    if i not in arr:
        print(i)