#include<stdio.h>
struct Book
{
    int id;
    char title[20];
    char author[20];
    float price;
    struct Book *next;

}b1;
void printStructureData(struct Book b)
{
    printf("\nBook details...\n");
    printf("\nBook id = %d",b.id);
    printf("\nBook title = %s",b.title);
    printf("\nBook author = %s",b.author);
    printf("\nBook price = %f",b.price);

}
void main()
{
    //struct Book b2 = {1,"DSA","ABC",100.00};
    //struct Book b3;

    // size of *b2 and *b3 = 4 bytes
    // size of structure 52 bytes.
    // printf("Size = %u",sizeof(struct Book));

    struct Book *b2;
    b2 = (struct Book *)malloc(sizeof(struct Book)*1);

    struct Book *b2;
    b2 = (struct Book *)malloc(sizeof(struct Book)*1);

    printf("Enter book id :");
    scanf("%d",&b3.id);
    fflush(stdin);
    printf("\nEnter book title :");
    scanf("%[^\n]s",&b3.title);
    fflush(stdin);
    printf("\nEnter book author :");
    scanf("%[^\n]s",&b3.author);
    fflush(stdin);
    printf("\nEnter book price :");
    scanf("%f",&b3.price);

    b2.next = &b3;
    //printf("\n Book price = %f",b2.next.price);
    //error: request for member 'price' in something not a structure or union|

    printf("\n Book price = %f",(b2.next)->price);
    printStructureData(b2);
    printStructureData(b3);

}
