#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void printLinkedList(struct Node *head)
{
    while(head != NULL)
    {

    }
}
void main()
{
    struct Node *first=NULL; // keep address of first node
    struct Node *temp=NULL; // will use to create new node

    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->next = NULL;

    printf("Enter value of data :");
    scanf("%d",&(temp->data));

    if(first == NULL)
    {
         first = temp;
    }

}
