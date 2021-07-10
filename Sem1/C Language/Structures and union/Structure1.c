#include<stdio.h>
struct marks
{
    int sub[3];
    int total;
};
void main()
{
    struct marks student[3]={45,67,81,0,75,53,69,0,57,36,71,0};
    struct marks total={0};;

    int i=0,j=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            student[i].total=student[i].total+student[i].sub[j];
            total.sub[j]=total.sub[j]+student[i].sub[j];
        }
    }
    for(i=0;i<=2;i++)
    {
        printf("student[%d]=%d\n",i,student[i].total);
    }
    for(i=0;i<=2;i++)
    {
        printf("subject[%d]=%d\n",i+1,total.sub[i]);
    }
}
