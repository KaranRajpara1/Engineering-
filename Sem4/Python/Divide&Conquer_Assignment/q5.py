def binarySearch(arr,l,r) :
    if l <= r :
        mid = int((l+r)/2)
        if arr[mid] == mid :
            return mid # element is found
        elif arr[mid] < mid:
            return binarySearch(arr,mid+1,r) # element on right side
        else :
            return binarySearch(arr,l,mid-1) # element on left side
    else :
        return -1


arr = [-1,0,1,2,4,10,12]

ans = binarySearch(arr,0,len(arr)-1)

if ans == -1 :
    print('Element not found')
else :
    print('Element found at index ',ans)
