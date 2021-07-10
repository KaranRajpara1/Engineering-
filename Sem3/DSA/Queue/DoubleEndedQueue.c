#include<stdio.h>
#include<malloc.h>
// In each and every operation we can think in 3 test cases
// 1. Queue is empty
// 2. Front == rear means only one element
// 3. More than one element.
struct Queue
{
    int value;
    struct Queue *next;
};

struct Queue *Front = NULL;
struct Queue *Rear = NULL;

void menu();
void enqueueFront();
void enqueueRear();
void dequeueFront();
void dequueRear();
void print();

void main()
{
    int choice;
    do
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            enqueueFront();
            break;
        case 2:
            enqueueRear();
            break;
        case 3 :
            dequeueFront();
            break;
        case 4:
            dequueRear();
            break;
        case 5 :
            print();
            break;
        case 6 :
            break;
        }

    }
    while(choice != 6);
}

void menu()
{
    printf("\n------------------------------------------");
    printf("\n DOUBLE ENDED QUEUE");
    printf("\n------------------------------------------");
    printf("\n1.Enqueue (Front) ");
    printf("\n2.Enqueue (Rear) ");
    printf("\n3.Dequeue (Front) ");
    printf("\n4.Dequeue (Rear) ");
    printf("\n5.Print ");
    printf("\n6.Exit ");
    printf("\n------------------------------------------");
    printf("\nSelect Operation : ");
}

void print()
{
    struct Queue *temp = NULL;
    if(Front == NULL)
    {
        printf("\nQueue is empty");
    }
    else if(Front == Rear)
    {
        printf("\n%d->",Front->value);
    }
    else
    {
        temp = Front;
        printf("\n");
        /*do
        {
            printf("%d->",temp->value);
            temp = temp->next;
        }
        while(temp != Rear);*/
        while(temp != Rear->next)
        {
            printf("%d->",temp->value);
            temp = temp->next;
        }
    }
}

void enqueueFront()
{
    struct Queue *temp = NULL;
    temp = (struct Queue *)malloc(sizeof(struct Queue)*1);
    printf("\nEnter value : ");
    scanf("%d",&(temp->value));
    temp->next = NULL;
    if(Front == NULL)
    {
        Front = temp;
        Rear = temp;
    }
    else
    {
        temp->next = Front;
        Front = temp;
    }

}

void enqueueRear()
{
    struct Queue *temp = NULL;
    temp = (struct Queue *)malloc(sizeof(struct Queue)*1);
    printf("\nEnter vale : ");
    scanf("%d",&(temp->value));
    temp->next = NULL; // Don't forget to NULL this otherwise sometime it can put us on trouble.
    if(Front == NULL) // We can also write this condition as (Rear == NULL) because if queue is empty then both Front and Rear are NULL
    {
        Front = temp;
        Rear = temp;
    }
    else
    {
        Rear->next = temp;
        Rear = temp;
        //printf("\nRear is changed");

    }
}

void dequeueFront()
{
    struct Queue *temp = NULL;
    if(Front == NULL)
    {
        printf("\nQueue is empty.");
    }
    else if(Front == Rear)
    {
        temp = Front ;
        Front = NULL;
        Rear = NULL;
        free(temp);
    }
    else
    {
        temp = Front;
        Front = Front->next;
        free(temp);
    }
}

void dequueRear()
{
    struct Queue *temp = NULL;
    if(Front == NULL)
    {
        printf("\nQueue is Empty.");
    }
    else if(Front == Rear)
    {
        temp = Front;
        Front = NULL;
        Rear = NULL;
        free(temp);
    }
    else
    {
        temp = Front;
        while(temp->next != Rear)
        {
            temp = temp->next;
        }
        Rear = temp;
        temp = Rear->next;
        Rear->next = NULL;
        free(temp);
    }
}

