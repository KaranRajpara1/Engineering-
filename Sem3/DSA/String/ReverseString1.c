//revere words but not statement
// input : "_ICT__MU__"
// output : "_TCI__UM_"
#include<stdio.h>
int main()
{
    int i=0;
    char *p;
    char *str;
    str = (char *)malloc(10*sizeof(char));
    int index=i,length=0,strlength=0;
    printf("Enter String :");
    scanf("%[^\n]s",str);
    //printf("%s",str);
    //printf("%c",*(str+1));
    while(str[i]!='\0')
    {
        strlength++;
        i++;
    }
    i=0;
    //printf("Length is %d\n",strlength);
    while(i<=strlength)
    {
        //printf("%c\n",*(str+i));
        //printf("%c",*(str+i));
        if(*(str+i)==' ' || *(str+i)=='\t' || *(str+i)=='\n')
        {
            printf("space",*(str+i));
            i++;
        }
        else
        {
            index=i;
            length=0;
            //printf("A char");
            while((*(str+index)!=' ' || *(str+index)!='\t' || *(str+index)!='\n' || *(str+index)!='\0') && index <=strlength)
            {
                //printf("%c",*(str+index));
                length++;
                index++;
            }
            p=(char *)calloc(length,sizeof(char));
            index = i+length-1;
            while(index>=i && index <=strlength)
            {
                printf("%c",*(str+index));
                index--;
            }
            i=i+length;
            free(p);
        }


    }
    return 0;
}
