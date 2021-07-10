#include<stdio.h>
void main()
{
    //In this program i am trying to give new allocated memory using realloc() to another pointer
    int *p,*q,sum1=0,sum2=0,i;
    p=(int *)malloc(5*sizeof(int));
    printf("pointer p is pointing to this location :%d\n",p);
    for(i=0;i<5;i++)
    {
        *(p+i)=i;
        sum1 += *(p+i);
    }
    printf("sum using p pointer : %d\n",sum1);
    q=(int *)realloc(p,10*sizeof(int));
    printf("After reallocating memory pointer p is pointing to : %d\n",p);
    printf("After reallocating memory pointer q is pointing to : %d\n",q);
    sum1=0;
    for(i=0;i<10;i++)
    {
        *(q+i)=i;
        sum1 += *(p+i);
    }
     printf("sum using pointer p after re-allocation : %d\n",sum1);
     sum1=0;
     for(i=0;i<10;i++)
    {
        *(q+i)=i;
        sum1 += *(q+i);
    }
    printf("sum using pointer q after re-allocation : %d\n",sum1);
}
