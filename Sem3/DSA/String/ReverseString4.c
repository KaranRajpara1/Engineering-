// Change the position of words but not reverse it
// input : "__ ICT__MU__"
// oUTPUT : "__MU__ICT__"
// WORKING PERFECTLY.
#include<stdio.h>
void main()
{
    char *str;
    str = (char *)malloc(100*sizeof(char));
    printf("Enter string :");
    scanf("%[^\n]",str);
    int i=0,j=0,length=0;
    while(*(str+i)!='\0')
    {
        length++;
        i++;
    }
    char *str2;
    str2=(char *)malloc((length+1)*sizeof(char));

    int startindex=0,endindex=length-1,index=0;
    for(i=length-1;i>=0;i--)
    {
        if(*(str+i)==' ' || *(str+i)=='\t' || *(str+i)=='\n' || i==0)
        {
            startindex = i+1;
            if(i==0)
            {
                startindex = 0;
            }
            for(j=startindex;j<=endindex;j++)
            {
                *(str2+index) = *(str+j);
                index++;
            }
            *(str2+(index++)) = ' ';
            i--;
            endindex = i-1;
        }
    }
    *(str2+index) = '\0';
    printf("%s",str2);
}
