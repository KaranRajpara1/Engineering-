//get size of array from user and get char. values from user and print it
#include<stdio.h>
void main()
{

    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value of a[%d]: ",i);
        scanf(" %c",&a[i]);//put one extra space before %c
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);

    }
}
