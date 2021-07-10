#include<stdio.h>
void main()
{
    //In this program i am trying to check reaaloc() wiil give clean memory or garbage memory in both cases(malloc and calloc)
    int *p,*q,i,sum1=0,sum2=0;
    p=(int *)malloc(5*sizeof(int));
    q=(int *)calloc(5,sizeof(int));
    for(i=0;i<5;i++)
    {
        *(p+i)=i;
        *(q+i)=i;
        sum1 += *(p+i);
        sum2 += *(q+i);
    }
    printf("%d %d\n",sum1,sum2);
    p=(int *)realloc(p,10*sizeof(int));
    q=(int *)realloc(q,10*sizeof(int));
    sum1=0;
    sum2=0;
    for(i=0;i<10;i++)
    {
        sum1 += *(p+i);
        sum2 += *(q+i);
    }
    printf("%d %d\n",sum1,sum2);
}
