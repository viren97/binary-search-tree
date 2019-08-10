def heapify(arr,n, i):
    larg = i
    l = 2*i+1
    r = 2*i+2

    if l<n and arr[l]>arr[larg]:
        larg = l
    if r<n and arr[r]>arr[larg]:
        larg = r

    if larg != i:
        arr[larg], arr[i] = arr[i], arr[larg]
        heapify(arr, n, larg)


def heapSort(arr):
    n = len(arr)
    for i in range(n-1, -1,-1):
        heapify(arr,n,i)

    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr,i,0)

        
    

arr = [5,6,7,12,14,13]
heapSort(arr)
print(arr)

    

    
