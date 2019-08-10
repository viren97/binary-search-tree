def rBinarySearch(arr,l,h,key):
    if (l==h):
        if arr[l]==key:
            return l
        else:
            return 0

    else:
        mid = (l+h)//2
        if arr[mid]== key:
            return mid +1
        elif arr[mid]>key:
            return rBinarySearch(arr,l, mid-1, key)
        else:
            return rBinarySearch(arr,mid+1,h,key)

        
arr = [3,6,8,12,14,17,25,29,31,36,42,47,53,55,66]
key = 120
l = 0
h = len(arr)-1
print(rBinarySearch(arr,l,h,key))
