n, h = map(int, input().rstrip().split())

arr = list(map(int, input().rstrip().split()))

sum =0
for i in range(len(arr)):
    if arr[i]>h:
        sum+=2
    else:
        sum+=1
print(sum)

