#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i,n,x;
    FILE *fp;
    fp=fopen("all.txt","w");
    if(fp==NULL)
    {
        printf("Eroor! while opening file");
    }
    else
    {
        printf("How many numbers: ");
        scanf("%d",&x);
        for(i=1;i<=x;i++)
        {
            scanf("%d",&n);
            fprintf(fp,"%d\n",n);
        }



    }
    fclose(fp);
}
