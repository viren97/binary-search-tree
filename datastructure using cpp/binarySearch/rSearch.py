def rSearch(arr,l,h,key):
    if(l<=h):
        mid = (l+h)//2
        if arr[mid] == key:
            return mid+1
        elif arr[mid]>key:
            return rSearch(arr,l,mid-1,key)
        else:
            return rSearch(arr,mid+1,h,key)
    return "not found"

arr = [3,6,8,12,14,17,25,29,31,36,42,47,53,55,66]
key = 100
l = 0
h = len(arr)-1
print(rSearch(arr,l,h,key))

