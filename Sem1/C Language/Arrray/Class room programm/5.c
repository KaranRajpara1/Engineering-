//how to insert single element in array
#include<stdio.h>
void main()
{
    int i,n,a[50],key,loc;
     printf("Enter size of array:  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }


    printf("Enter element to insert: ");
    scanf("%d",&key);

    printf("Enter location to insert: ");
    scanf("%d",&loc);

    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=key;

     for(i=0;i<n+1;i++)
    {
        printf(" a[%d]: %d\n ",i,a[i]);

    }
}
