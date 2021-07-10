#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a;
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("all.txt","r");
    fp2=fopen("even.txt","w");
    fp3=fopen("odd.txt","w");
    if(fp1==NULL || fp2==NULL || fp3==NULL)
    {
        printf("Error! While opening file");
    }
    else
    {
        while((a=fgetw(fp1))!=EOF)
        {
            if(a%2==0)
            {
                fprintf(fp2,"%d\n",a);
            }
            else
            {
                fprintf(fp3,"%d\n",a);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
