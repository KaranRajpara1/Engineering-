//multiplication of two matrix 2*2
void main()
{
    int i,j,a[2][2],b[2][2],c[2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          printf("Enter value of a[%d][%d]: ",i,j);
          scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          printf("Enter value of b[%d][%d]: ",i,j);
          scanf("%d",&b[i][j]);
        }

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j]);
        }

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");

    }
}
