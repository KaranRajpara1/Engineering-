//Get values from user store it into one array and print it's aseending array
#include<stdio.h>
void main()
{
    int i,n,b,c,m,j;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
     printf("Assending order is: \n");
    for(i=0;i<n;i++)
    {
        m=a[i];
        for(j=i+1;j<n;j++)
        {
            if(m>a[j])
            {
                c=m;
                m=a[j];
                a[j]=c;
            }
        }
         printf("%d\n",m);
    }
}



