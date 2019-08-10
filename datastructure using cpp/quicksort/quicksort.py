def partition(arr, l, h):
    pivot = arr[l]
    i = l
    j = h-1

    while i<j:
        while(pivot>=arr[i]):
            i += 1
        while(pivot<arr[j]):
            j-=1
        if i<j:
            arr[i],arr[j] = arr[j], arr[i]

    arr[l], arr[j] = arr[j], arr[l]
    return j

def quicksort(arr,l,h):
    if l<h:
        j = partition(arr,l,h)
        quicksort(arr, l, j-1)
        quicksort(arr, j+1, h)

arr = [10,16,8,12,15,6,3,9,5,8]
l = 0
h = len(arr)
quicksort(arr, l,h)
print(arr)

            
