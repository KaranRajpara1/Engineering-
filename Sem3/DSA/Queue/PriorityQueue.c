#include<stdio.h>
#include<conio.h>

struct Process
{
    int process_no;
    int priority;
    struct Process *next;
};

struct Process *Front=NULL, *Rear=NULL;

void OperationMenu();
void Enqueue();
void Dequeue();
void printQueue();

int main()
{
    int choice;
    do
    {
        OperationMenu();
        printf("\n Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                printQueue();
                break;
        }
    }while(choice!=4);
    return 0;
}

void OperationMenu()
{
    printf("\n=========================");
    printf("\n   Priority Queue");
    printf("\n=========================");
    printf("\n    SELECT OPERATION ");
    printf("\n=========================");
    printf("\n 1 - Enqueue");
    printf("\n 2 - Dequeue");
    printf("\n 3 - Print Queue");
    printf("\n 4 - Exit");
    printf("\n=========================");
}

void Enqueue()
{
    struct Process *temp = NULL;
    struct Process *head = NULL;

    temp = (struct Process *)malloc(sizeof(struct Process)*1);
    printf("\nEnter process No. : ");
    scanf("%d",&(temp->process_no));
    printf("\nEnter priority for process : ");
    scanf("%d",&(temp->priority));
    temp->next = NULL;

    if(Front == NULL) // means queue is empty
    {
        Front = temp;
        Rear = temp;
    }
    else // at least one element is present
    {
        if(Front == Rear) // Only one element is present
        {
            if(temp->priority > Front->priority) // new node has high priority than element present in queue
            {
                temp->next = Front;
                Front = temp;
            }
            else // new node has low or equal priority than element present in queue
            // when we have same priority we will implement it in first come first serve basis.
            {
                Rear->next = temp;
                Rear = temp;
            }
        }

        else // more than one element is present in Queue
        {
            if(temp->priority > Front->priority) // if new node has highest priority than all present in queue.
            {
                temp->next = Front;
                Front = temp;
            }
            else if(temp->priority <= Rear->priority) //// if new node has lowest priority than all present in queue.
            {
                Rear->next = temp;
                Rear = temp;
            }
            else // priority lies between Front and Rear
            {
                head = Front;
                while(head->next->priority >= temp->priority && head->next != NULL && head->next != Rear)
                // head->next != Rear condition is for avoid traversal in case of no. of elements are 2.
                {
                    head = head->next;
                }
                temp->next = head->next;
                head->next = temp;
            }
        }
    }
}

void printQueue()
{
    struct Process *temp = NULL;
    if(Front == NULL)
    {
        printf("\nQueue is empty");
    }
    else if(Front == Rear)
    {
        printf("\n%d | %d->",Front->priority,Front->process_no);
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
            printf("%d | %d -> ",temp->priority,temp->process_no);
            temp = temp->next;
        }
    }
}

void Dequeue()
{
    if(Front == NULL)
    {
        printf("\nUnderflow");
    }
    else if(Front == Rear)
    {
        printf("\nQueue is now empty after this dequeue.");
        Front = NULL;
        Rear = NULL;
    }
    else
    {
        struct Process *temp = NULL;
        temp = Front;
        Front = Front->next;
        free(temp);
    }
}
