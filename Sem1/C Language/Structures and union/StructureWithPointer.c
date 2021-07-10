#include<stdio.h>
struct invent
{
    char name[20];
    int number;
    float price;
};
void main()
{
    struct invent product[3],*ptr;
    printf("Input\n");
    for(ptr=product;ptr<product+3;ptr++) // Question : Why we can not write product[0] in intiallising of for loop (ptr=product[0]) || ans : we have to write &product[0]
    {
        scanf("%s %d %f",ptr->name,&ptr->number,&ptr->price);
        //scanf("%s %d %f",(*ptr).name,&(*ptr).number,&(*ptr).price);
        // it is same as previous line..
        // actually ptr->name is (*ptr).name
    }

    printf("output\n");
    for(ptr=product;ptr<product+3;ptr++)
    {
        printf("%s %d %f\n",ptr->name,ptr->number,ptr->price);
    }
}
