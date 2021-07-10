#include<stdio.h>
void main()
{
    int arows,acols,brows,bcols;
    int i,j,k;
    printf("Enter rows and columns for matrix a : \n");
    scanf("%d %d",&arows,&acols);
    printf("Enter elements for matrix a :\n");
    int a[arows][acols];
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter rows and columns for matrix b : \n");
    scanf("%d %d",&brows,&bcols);
    int b[brows][bcols];
    for(i=0;i<brows;i++)
    {
        for(j=0;j<bcols;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Now we will go for matrix multiplication ..\n");
    if(acols != brows)
    {
        printf("Matrix multiplication is not possible..\n");
    }
    else
    {
        int product[arows][bcols];
        int sum=0;
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcols;j++)
            {
                sum=0;
                for(k=0;k<acols;k++) //instead of brows we can write brows
                {
                    sum = sum+a[i][k]*b[k][j];
                }
                product[i][j]=sum;
            }
        }
        printf("Resultant matrix \n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcols;j++)
            {
                printf("%d\t",product[i][j]);
            }
            printf("\n");
        }
    }

}

