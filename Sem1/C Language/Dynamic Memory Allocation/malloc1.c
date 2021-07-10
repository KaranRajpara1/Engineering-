#include<stdio.h>
void main()
{
    int n,*p,i,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Error while allocating memory.");
        exit(0);
    }
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("Elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    printf("Sum is %d",sum);
}
