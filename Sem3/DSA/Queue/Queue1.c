#include<stdio.h>
//Queue implementation using LinkedList without size limitation constrains
struct Queue
{
    int data;
    struct Queue *next;
} ;
void printMenu(void);
struct Queue * Enqueue(struct Queue *,int);
struct Queue * Dequeue(struct Queue *);
void printQueue(struct Queue *);
void main()
{
    int n,ch;
    struct Queue *first = NULL;
     do
    {
        printMenu();
         printf("\n Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter data :");
            scanf("%d",&n);
            first = Enqueue(first,n);
            break;
        case 2:
            first = Dequeue(first);
            break;
        case 3 :
            printQueue(first);
            break;
        }
    }while(ch != 4);
}

void printMenu()
{
    printf("\n=======================");
    printf("\nSelect Operation");
    printf("\n=======================");
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Print");
    printf("\n4.Exit");
    printf("\n=======================");
    printf("\n");
}

struct Queue * Enqueue(struct Queue *first,int n)
{
    struct Queue *temp = NULL;
    struct Queue *head = NULL;
    temp = (struct Queue *)malloc(sizeof(struct Queue)*1);
    temp->data = n;
    temp->next = NULL;

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
    return first;
}

struct Queue * Dequeue(struct Queue *first)
{
    if(first == NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        struct Queue *temp = NULL;
        temp = first;
        first = first->next;
        free(temp);
        return first;
    }
}

void printQueue(struct Queue *p)
{
    if(p == NULL)
    {
        printf("\nQueue  is empty");
    }
    else
    {
       printf("\n");
    while(p != NULL)
    {
        printf("%d->",p->data);
        p = p->next;
    }
    printf("\n");
    }
}
