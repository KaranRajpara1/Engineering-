#include<stdio.h>
void main()
{
//Example of 2D array using double array
    int arr[2][3]={{2,4,6},{3,6,9}};
    int **q;
    //q=arr;
    //This is not correct.
    int i,j;
    /* for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            //printf("%d\t",q[i][j]);
            //It will not work
            //It will not give error. But also not print anything.



        }
        printf("\n");
    }*/
    q=(int *)malloc(sizeof(int *)*2);
    //printf("%d\n",arr[0][0]);
    //printf("%d\n",&arr[0][0]);
    for(i=0;i<2;i++)
    {
        q[i]=&arr[i][0];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",q[i][j]);
        }
        printf("\n");
    }
}
