def findMedianTerm(arr1,arr2) :
    i = 0
    j = 0
    k = 0
    while k < len(arr1) :
        if arr1[i] > arr2[j] :
            temp = arr2[j]
            j += 1
            k += 1
        else :
            temp = arr1[i]
            i += 1
            k += 1
    if arr1[i] > arr2[j] :
        temp2 = arr2[j]
    else :
        temp2 = arr1[i]
    return (temp+temp2)/2

arr1 = [1,3,5,10]
arr2 = [2,4,6,8]
print(findMedianTerm(arr1,arr2))
