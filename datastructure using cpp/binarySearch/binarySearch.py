def binarySearch(arr, key):
    l = 0
    h = len(arr)-1
    while(l<=h):
        mid = (l+h)//2
        if arr[mid]==key:
            return mid + 1
        elif arr[mid]>key:
            h = mid - 1
        else:
            l = mid+1
    return 0

arr = [3,6,8,12,14,17,25,29,31,36,42,47,53,55,6]
key = 3

print(binarySearch(arr,key))
