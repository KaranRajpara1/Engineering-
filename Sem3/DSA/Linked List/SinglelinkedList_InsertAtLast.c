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
    int i,n;
    printf("Enter how many nodes you want to create : ");
    scanf("%d",&n);
    struct Node *first = NULL;
    struct Node *temp = NULL;
    struct Node *head = NULL;
    for(i=1;i<=n;i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->next = NULL;
        printf("Enter data :");
        scanf("%d",&(temp->data));
        if(first == NULL)
        {
            first = temp;
        }
        else
        {
            head = first;
            while(head->next != NULL)
            {
                head = head->next;
            }
            head->next = temp;
        }
        printLinkedList(first);
    }
}
