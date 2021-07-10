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
    p=realloc(p,(n+2)*sizeof(int));
    if(p==NULL)
    {
        printf("Error while re allocating memory.");
        exit(0);
    }
    printf("Enter 2 new values:\n");
    for(i=n;i<n+2;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n+2;i++)
    {
        printf("%d\n",*(p+i));
        sum=sum+*(p+i);
    }
    // Trying R&D
    int *q;
    q=realloc(p,(n+2)*sizeof(int));
}
