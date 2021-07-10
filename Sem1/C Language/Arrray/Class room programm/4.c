// find greatest element in array
#include<stdio.h>
void main()
{
    int i,n,large;
    printf("Enter size of array:  ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("Largest value in array is %d",large);
}
