#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter size of array:  ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is %d",sum);
}
