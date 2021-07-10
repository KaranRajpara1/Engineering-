#include<stdio.h>
void main()
{
    int n,*p,i,sum=0;
    printf("Enter size of element: ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Error ! While allocating memory");
    }
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
        sum=sum+(*(p+i));
    }
    printf("Sum is %d",sum);
}
