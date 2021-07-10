'''
Given an infinite array in which the first n cells contain integers insorted order and the rest of the cells are filled with some special
 symbol(say, $). Assume  we  do  not  know  the n value.  Give  an  algorithm  that  takesan integer K as input and finds a position in the
 array containing K, if suchaposition exists, in O(logn) time.
'''

def binarySearch(arr,l,r,x) :
    if arr[l] > x :
        return -1
    if r > len(arr)-1 :
        r = len(arr)-1
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
def getIndex(arr, key) :
    low = 0
    high = 1
    temp = arr[0]

    # Finding range where elemnt may be present
    while temp < key:
        low = high
        high = 2*high
        if high > len(arr)-1 :
            high = len(arr)-1
        temp = arr[high]

        if arr[low] == '$' or arr[high] == '$' :
            return -1
    # now we have range where element may be present so apply binary search
    return binarySearch(arr,low,high,key)
arr = [5,7,9,10,12,13,14,20,25,26,'$','$','$','$']
element = 12
ans = getIndex(arr,element)
if ans == -1 :
    print('ELement not found')
else :
    print('Element found at index = ',ans)

element = 27
ans = getIndex(arr,element)
if ans == -1 :
    print('ELement not found')
else :
    print('Element found at index = ',ans)
