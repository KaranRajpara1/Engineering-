#include<stdio.h>
void main()
{
    //Example of 2D array using single array
    int arr[2][3]={{2,4,6},{3,6,9}};
    //int arr[2][3]={2,4,6,3,6,9}; //This 2 are exactly same
    int *p;
    p=arr;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            //printf("%d\t",p[i][j]);
            //It will not work
            //error: subscripted value is neither array nor pointer nor vector|

            printf("%d\t",*(p+i*3+j));
            // here 3 is maxcol
            // This is pointer notation

            //printf("%d\t",p[i*3+j]);
            //This is also correct.
            //This is called array notation

        }
        printf("\n");
    }
}
