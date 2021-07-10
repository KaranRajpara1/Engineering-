//revere words but not statement
// input : "_ICT__MU__"
// output : "_TCI__UM_"
// Working properly
#include<stdio.h>
int main()
{
    int i=0;
    char *str;
    str = (char *)malloc(10*sizeof(char));
    int index=i,length=0;
    printf("Enter String :");
    scanf("%[^\n]s",str);
    while(*(str+i)!='\0')
    {

        if(*(str+i)==' ' || *(str+i)=='\t' || *(str+i)=='\n')
        {
            printf(" ",*(str+i));
            i++;
        }
        else
        {
            index=i;
            length=0;
            while(1)
            {
                if(*(str+index)==32|| *(str+index)=='\t' || *(str+index)=='\n' || *(str+index)=='\0')
                {
                    break;
                }
                length++;
                index++;
            }
            index = i+length-1;
            while(index>=i )
            {
                printf("%c",*(str+index));
                index--;
            }
            i=i+length;
        }
    }
    return 0;
}
