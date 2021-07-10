//Program: Get size of array from user and get value of element from user and find it's sum
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf(" Sum is %d",sum);

}
