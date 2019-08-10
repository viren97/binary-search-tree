#2 way merging arrays

def twoWayMerge(a1,a2,a3):
    i = 0
    j = 0
    k = 0
    m = len(a1)
    n = len(a2)

    while(i<m and j<n):
        if a1[i]>a2[j]:
            a3.append(a2[j])
            j += 1
            k += 1
        else:
            a3.append(a1[i])
            i += 1
            k += 1

    while(i<m):
        a3.append(a1[i])
        i += 1
        k += 1
    while(j<n):
        a3.append(a2[j])
        j += 1
        k += 1

a1 = [19,38,69,20,67]
a2 = [93,57,26,0,48,3]
a3 = []
a1.sort()
a2.sort()
twoWayMerge(a1,a2,a3)
print(a3)
            
