#include<stdio.h>
int size,position=-1;
int stack[];

void menu();
void push(int);
void pop();
void tos();
void print();

void main()
{
    int choice,n;
    printf("\nEnter size of array :");
    scanf("%d",&size);
    do
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            printf("\nEnter the element :");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            tos();
            break;
        case 4:
            print();
            break;
        }
    }
    while(choice != 5);
}

void menu()
{
    printf("\n\n---------------------------");
    printf("\n1.Push element");
    printf("\n2.Pop element");
    printf("\n3.Top of the stack");
    printf("\n4.Print the stack");
    printf("\n5.Exit");
    printf("\n---------------------------");
    printf("\nEnter the choice : ");
}

void push(int data)
{
    if(position >= size-1)
    {
        printf("\nStack is overflow");
    }
    else
    {
        position++;
        stack[position] = data;
    }
}

void pop()
{
    if(position<=-1)
    {
        printf("\n Stack is underflow");
    }
    else
    {
        printf("\nPoped element = %d",stack[position]);
        position--;
    }
}

void tos()
{
    if(position>-1)
    {
        printf("Top of stack = %d",stack[position]);
    }
    else
    {
        printf("\nStack is empty");
    }
}

void print()
{
    int i;
    printf("\nStack is...\n");
    if(position == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        for(i=position;i>=0;i--)
    {
        printf("%d->",stack[i]);
    }
    }
}
