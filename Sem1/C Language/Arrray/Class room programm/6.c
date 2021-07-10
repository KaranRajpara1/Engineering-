//how to insert all element of array into another array
#include<stdio.h>
void main()
{
    int i,m,n,loc;
     printf("Enter size of array a:  ");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
     printf("Enter size of array b:  ");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    printf("Enter location to insert: ");
    scanf("%d",&loc);

    for(i=m-1;i>=loc;i--)
    {
        a[i+n]=a[i];
    }
     for(i=0;i<n;i++)
    {
        a[loc+i]=b[i];
    }
     for(i=0;i<n+m;i++)
    {
        printf(" a[%d]: %d\n ",i,a[i]);

    }

}
