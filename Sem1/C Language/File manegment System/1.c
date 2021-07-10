//To Make file and write in it.
#include<stdio.h>
void main()
{
    FILE *fp;
    char x[50]={"Karan"};
    fp=fopen("abc.c","w");
    if(fp==NULL)
    {
        printf("Error!");
    }
    if(strlen(x)>0)
    {
        fputs(x,fp);
    }
    fclose(fp);
}
