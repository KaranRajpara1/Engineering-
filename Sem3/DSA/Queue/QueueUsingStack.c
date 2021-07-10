#include<stdio.h>
struct Stack
{
    int data;
    struct Stack *next;
};

struct Stack *first = NULL, *second = NULL;

struct Stack * push(int,struct Stack *);
void print(struct Stack *);
void Enqueue();
void Dequeue();
int popFromFirst();
int popFromSecond();


void main()
{
    struct Stack *head = NULL;
    int n;
    do
    {
        printMenu();
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            head = first;
            print(head);
            break;
        case 4:
            break;
        default:
            printf("\nInvalid choice");
            break;
        }
    }
    while(n != 4);
}

void printMenu()
{
    printf("\n=====================================");
    printf("\nImplementation of Queue using Stack");
    printf("\n=====================================");
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Print");
    printf("\n4.Exit");
    printf("\n=====================================");
    printf("\n\nEnter choice : ");
}

void Enqueue()
{
    int n;
    printf("\nEnter data :");
    scanf("%d",&n);
    first = push(n,first);
}

struct Stack * push(int n,struct Stack *first)
{
    struct Stack *temp = NULL;
    temp = (struct Stack *)malloc(sizeof(struct Stack)*1);
    temp->data = n;
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
    return first;
}

void print(struct Stack *head)
{
    if(head == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\n");
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("\n");
    }
}

void Dequeue()
{
    if(first == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        // pop from the first and push into the second
        while(first != NULL)
        {
            second = push(popFromFirst(),second);
        }

        // pop first element of second
        popFromSecond();

        // pop from the s2 and push into the s1
        while(second != NULL)
        {
            first = push(popFromSecond(),first);
        }
    }

}

int popFromFirst()
{
    int n = first->data;
    struct Stack *temp = NULL;
    temp = first;
    first = first->next;
    free(temp);

    return n;
}

int popFromSecond()
{
    int n = second->data;
    struct Stack *temp = NULL;
    temp = second;
    second = second->next;
    free(temp);

    return n;
}
