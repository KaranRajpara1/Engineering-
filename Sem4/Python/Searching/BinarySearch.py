arr = [2,3,4,5,6,7,8,9,10]
key = 9

# Recursive approach
def binarySearch(arr,l,r,x) :
    if l <= r :
        mid = int((l+r)/2)
        if arr[mid] == x :
            return mid # element is found
        elif arr[mid] > x :
            return binarySearch(arr,l,mid+1,x) # element on left side
        else :
            return binarySearch(arr,mid+1,r,x) # element on right side
    else :
        return -1

# Iterative approach
def binarySearch2(arr,x) :
    l = 0
    r = len(arr) - 1
    while l <= r :
        mid = int((l+r)/2)
        if arr[mid] == key :
            return mid
        elif arr[mid] > x :
            r = mid + 1
        else :
            l = mid + 1
    return -1
print('Element found at index : ',binarySearch2(arr,key))

ans = binarySearch(arr,0,len(arr)-1,key)


if ans == -1 :
    print('Element not found')
else :
    print('Element found at index ',ans)
