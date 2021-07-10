#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch,filename[25];
    FILE *fp;
    printf("Enter file name you want to see");
    gets(filename);
    fp=fopen(filename,"r");
    if(fp == NULL)
    {
        printf("Error! ");

    }
    printf("the content of file:\n");
    while((ch =fgetc(fp))!= EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}
