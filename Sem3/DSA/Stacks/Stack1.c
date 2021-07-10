#include<stdio.h>
#include<malloc.h>
//Stack implementation using LinkedList without size limitation constrains
struct Stack
{
    int data;
    struct Stack *next;
};
void printMenu(void);
struct Stack * Push(struct Stack *,int);
struct Stack * Pop(struct Stack *);
void printStack(struct Stack *);

void main()
{
    int n,ch;
    struct Stack *first = NULL;
    // Intialise it with NULL because sometimes program may terminate while printing if we do not  intiallise with NULL
     while(1)
    {
        printMenu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter data :");
            scanf("%d",&n);
            first = Push(first,n);
            break;
        case 2:
            first = Pop(first);
            break;
        case 3 :
            printStack(first);
            break;
        case 4 :
            printf("\nTop of the stack is : %d\n",first->data);
        }
    }
}

void printMenu()
{
    printf("\n=======================");
    printf("\nSelect Operation");
    printf("\n=======================");
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Print");
    printf("\n4.Top of the stack (TOS)");
    printf("\n");

}

struct Stack * Push(struct Stack *first,int n)
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

struct Stack * Pop(struct Stack *first)
{
    struct Stack *temp = NULL;
    temp = first;
    first = first->next;
    free(temp);
    return first;
}

void printStack(struct Stack *p)
{
     printf("\n");
    while(p != NULL)
    {
        printf("%d->",(p->data));
        p = p->next;
    }
    printf("\n");
}
