 #include <stdio.h>
#include <stdlib.h>
 
void indexedSequentialSearch(int arr[], int n, int k)
{
    int elements[20], indices[20], temp, i, set = 0;
    int j = 0, ind = 0, start, end;
    for (i = 0; i < n; i += 3) {
 
        // Storing element
        elements[ind] = arr[i];
 
        // Storing the index
        indices[ind] = i;
        ind++;
    }
    if (k < elements[0]) {
        printf("Not found");
        exit(0);
    }
    else {
        for (i = 1; i <= ind; i++)
            if (k <= elements[i]) {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
    }
    if (set == 0) {
        start = indices[i - 1];
        end = n;
    }
    for (i = start; i <= end; i++) {
        if (k == arr[i]) {
            j = 1;
            break;
        }
    }
    if (j == 1)
        printf("Found at index %d", i);
    else
        printf("Not found");
}
 
// Driver code
void main()
{
 
    int arr[] = { 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Element to search
    int k = 8;
    indexedSequentialSearch(arr, n, k);
}
