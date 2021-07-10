#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void printLinkedList(struct Node *p)
{
    printf("\n");
    while(p != NULL)
    {
        printf("%d->",p->data);
        p = p->next;
    }
    printf("\n");
}
void main()
{
    int n,i;
    printf("Enter how many nodes you want to create : ");
    scanf("%d",&n);
    struct Node *first = NULL;
    struct Node *temp = NULL;
    struct Node *head = NULL;
    for(i=1;i<=n;i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        printf("Enter data :");
        scanf("%d",&(temp->data));
        temp->next = NULL;
        if(first == NULL)
        {
            first = temp;
        }
        else
        {
            temp->next = first;
            first = temp;
        }
        printLinkedList(first);
    }
   /* printf("\nDelete last node\n");
    head = first;
    while(head->next->next != NULL)
    {
        head = head->next;
    }
    printf("\n%d\n",(head->data));
    temp = head->next;
    printf("\n%d\n",(temp->data));
    head->next = NULL;
    free(temp);
    //first = temp->next;
    //free(temp);
    */
    printLinkedList(first);
}
