#2 way merging arrays

def merge(a1,a2,arr):
    
    i = 0
    j = 0
    k = 0
    m = len(a1)
    n = len(a2)

    while(i<m and j<n):
        if a1[i]>a2[j]:
            arr[k]=a2[j]
            j += 1
            k += 1
        else:
            arr[k] = a1[i]
            i += 1
            k += 1

    while(i<m):
        arr[k] = a1[i]
        i += 1
        k += 1
    while(j<n):
        arr[k] = a2[j]
        j += 1
        k += 1


def mergeSort(arr):
    l = []
    h = []
    if l<h:
        mid = len(arr)//2
        l = arr[:mid]
        h = arr[mid:]
        mergeSort(l)
        mergeSort(h)
        merge(l,h, arr)

        
arr = [19,38,69,20,67]
mergeSort(arr)
print(arr)
            
