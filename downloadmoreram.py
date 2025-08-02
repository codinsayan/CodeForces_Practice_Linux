def ModifiedselectionSort(array, size, array2):
    
    for ind in range(size):
        min_index = ind
 
        for j in range(ind + 1, size):

            if array[j] < array[min_index]:
                min_index = j

        (array[ind], array[min_index]) = (array[min_index], array[ind])
        (array2[ind], array2[min_index]) = (array2[min_index], array2[ind])

t = int(input())

for z in range(t):

    n,k = map(int, input().rstrip().split())

    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))

    ModifiedselectionSort(a,n,b)

    ram = k
    for i in range(n):
        if ram>=a[i]:
            ram += b[i]
    print(ram)




    