//addition of two matrix
void main()
{
    int i,j,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("Enter value of a[%d][%d]: ",i,j);
          scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("Enter value of b[%d][%d]: ",i,j);
          scanf("%d",&b[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");

    }
}
