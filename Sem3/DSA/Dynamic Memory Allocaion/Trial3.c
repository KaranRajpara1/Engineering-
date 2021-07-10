#include<stdio.h>
void main()
{
    //without allocating memry using malloc or calloc can we directly reallocate memory ??
   // int *p;
    //p=(int *)realloc(p,5*sizeof(int));
   // char *str=" I am studying in the\n ICT Department  ";

        //char *str=" I am studying in the ICT Department ";

    char p[20];
    char *s="hello world";
    int length = strlen(s);
    int i;
    printf("%d",length);
    printf(" s[length] = %c\n",s[length]);
    for(i=0;i<length;i++)
    {
                p[i]=s[length-i-1];


    }

    printf("%s",p);
}
