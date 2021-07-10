#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *p );
void printMenu(void);
void createLinkedList(int);
void InsertAtFirst(int);
void InsertBefore(int,int);
struct Node * InsertAfter(struct Node*,int,int);
struct Node * InsertAtposition(struct Node*,int,int);
struct Node * DeleteNode(struct Node*,int);
struct Node * CopyLinkedList(struct Node*);
struct Node * CopyReverseLinkedList(struct Node*);
void printReverseLinkedList(struct Node *);
struct Node * ConcateLinkedList(struct Node *,struct Node*);
int countNode(struct Node *);
void splitLinkedList(struct Node *);
int getMiddle(struct Node *);
struct Node * removeDuplicate(struct Node *);

struct Node *first = NULL;
struct Node *second = NULL;

void main()
{
    int i,n,ch,value;
    struct Node *temp = NULL;
    struct Node *head = NULL;
    while(1)
    {
        printMenu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter How many Nodes you want :");
            scanf("%d",&n);
            createLinkedList(n);
            break;
        case 2:
            printf("\nEnter data :");
            scanf("%d",&n);
            InsertAtFirst(n);
            printLinkedList(first);
            break;
        case 3:
            printf("\nEnter data:");
            scanf("%d",&n);
            printf("Before which node value");
            scanf("%d",&value);
            InsertBefore(n,value);
            printLinkedList(first);
            break;
        case 4:
            printf("\nEnter data:");
            scanf("%d",&n);
            printf("After which node value");
            scanf("%d",&value);
            first = InsertAfter(first,n,value);
            printLinkedList(first);
            break;
        case 5:
            printf("\nEnter data:");
            scanf("%d",&n);
            printf("At which position:");
            scanf("%d",&value);
            first = InsertAtposition(first,n,value);
            printLinkedList(first);
            break;
        case 6:
            printf("\nEnter node value which you want to delete:");
            scanf("%d",&n);
            first = DeleteNode(first,n);
            printLinkedList(first);
            break;
        case 7:
            second = CopyLinkedList(first);
            printLinkedList(second);
            break;
        case 8:
            second = CopyReverseLinkedList(first);
            printLinkedList(second);
            break;
        case 9:
            printReverseLinkedList(first);
            break;
        case 10:
            first = ConcateLinkedList(first,second);
            printLinkedList(first);
            break;
        case 11 :
            printf("\n Number of nodes in LinkedList = %d",countNode(first));
            break;
        case 12 :
            splitLinkedList(first);
            break;
        case 13 :
            printf("Middle term = %d",getMiddle(first));
            break;
        case 14 :
            printf("\nRemove duplicate element from sorted Linked List");
            first = removeDuplicate(first);
            printLinkedList(first);
            break;

        }
    }

}

void printLinkedList(struct Node *p)
{
    struct Node *head = p;
    printf("\n");
    do
    {
        printf("%d->",head->data);
        head = head->next;

    }
    while(head != p);
    printf("\n");
}
void printMenu()
{
    printf("\n=======================");
    printf("\nSelect Operation");
    printf("\n=======================");
    printf("\n1.Create LinkedList");
    printf("\n2.Insert node at first");
    printf("\n3.Insert node before element");
    printf("\n4.Insert node after element");
    printf("\n5.Insert node at specific position");
    printf("\n6.Delete node ");
    printf("\n7.Copy LinkedList ");
    printf("\n8.Copy Reverse LinkedList ");
    printf("\n9. Print LinkedList in reverse order");
    printf("\n10.concatenate LinkedList ");
    printf("\n11.Count no of nodes in LinkedList");
    printf("\n12.Split the linkedList");
    printf("\n13.Middle term of the LinkedList");
    printf("\n14.Remove duplicate element from sorted Linked List");
    printf("\n=======================");
    printf("\nEnter choice = ");
}
void createLinkedList(int n)
{
    int i;
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
            temp->next = first;
           // printf("\nAddress  of first : %d",(first));
            //printf("\nnext part = %d",temp->next);
        }
        else
        {
            head = first;
            while(head->next != first)
            {
                head = head->next;
            }
            head->next = temp;
            temp->next = first;
            first = temp;

        }
        //printLinkedList(first);
    }
    printLinkedList(first);

}
void InsertAtFirst(int n)
{
    struct Node *temp = NULL;
    struct Node *head = NULL;

        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->data = n;
        temp->next = NULL;
        if(first == NULL)
        {
            first = temp;
            temp->next = first;
        }
        else
        {
            head = first;
            while(head->next != first)
            {
                head = head->next;
            }
            head->next = temp;
            temp->next = first;
            first = temp;

        }


}
void InsertBefore(int data,int value)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node)*1);
    struct Node *head=NULL;

    temp->data = data;
    temp->next = NULL;

    head = first;
    while(head->next->data != value)
    {
        head = head->next;
    }
    temp->next = head->next;
    head->next = temp;
    return first;
}
struct Node * InsertAfter(struct Node *first,int data,int value)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node)*1);
    struct Node *head=NULL;
    temp->data = data;
    temp->next = NULL;

    head = first;
    while(head->data != value)
    {
        head = head->next;
    }
    temp->next = head->next;
    head->next = temp;
    return first;
}
struct Node * InsertAtposition(struct Node *first,int data,int position)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node)*1);
    struct Node *head=NULL;
    temp->data = data;
    temp->next = NULL;
    int i=1;
    head = first;
    while(i<position-1) // because we want to stop before that position
    {
        head = head->next;
        i++;
    }
    temp->next = head->next;
    head->next = temp;
    return first;
}
struct Node * DeleteNode(struct Node *first,int data)
{
    struct Node *temp=NULL;
    struct Node *head=NULL;
    head = first;
    while(head->next->data != data)
    {

        head = head->next;
    }
    temp = head->next;
    head->next = head->next->next;
    // Also we can write
    // head->next = temp->next;
    free(temp);
    return first;
}
struct Node * CopyLinkedList(struct Node *first)
{
    struct Node *second=NULL;
    struct Node *temp=NULL;
    struct Node *head = NULL;
    struct Node *shead = NULL;

    head = first;
    while(head != NULL)
    {
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp ->next = NULL;
        temp->data = head->data;
        if(second == NULL)
        {
            second = temp;
        }
        else
        {
            shead = second;
            while(shead->next != NULL)
            {
                shead = shead->next;
            }
            shead->next = temp;
        }
        head = head->next;
    }
    return second;
}

struct Node * CopyReverseLinkedList(struct Node *first)
{
    struct Node *second=NULL;
    struct Node *temp=NULL;
    struct Node *head = NULL;
    struct Node *shead = NULL;

    head = first;
    while(head != NULL)
    {
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->next = NULL;
        temp->data = head->data;
        if(second == NULL)
        {
            second = temp;
        }
        else
        {
            temp->next = second;
            second = temp;
        }
        head = head->next;
    }
    return second;
}

void printReverseLinkedList(struct Node *first)
{
    if(first == NULL)
    {
        return;
    }
    printReverseLinkedList(first->next);
    printf("%d->",first->data);
}

struct Node * ConcateLinkedList(struct Node *first,struct Node *second)
{
    struct Node *head = NULL;
    head = first;
    while(head->next != NULL)
    {
        head = head->next;
    }
    head->next = second;
    return first;
}

int countNode(struct Node *p)
{
    int count = 0;
    while(p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void splitLinkedList(struct Node *first)
{
    struct Node *temp = NULL;
    struct Node *head = NULL;
    struct Node *even = NULL;
    struct Node *odd = NULL;
    struct Node *head2 = NULL;

    head = first;
    while(head != NULL)
    {

        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->next = NULL;
        temp->data = head->data;
        if((head->data)%2!= 0)
        {

            if(odd == NULL)
            {
                odd = temp;
            }
            else
            {
                head2 = odd;
                while(head2->next != NULL)
                {
                    (head2) = (head2)->next;
                }
                (head2)->next = temp;
            }
        }
        else
        {
            if(even == NULL)
            {
                even = temp;
            }
            else
            {
                (head2) = even;
                while(head2->next != NULL)
                {
                    (head2) = (head2)->next;
                }
                (head2)->next = temp;
            }
        }
        head = head->next;

    }
    printf("\nOdd : ");
    printLinkedList(odd);
    printf("\nEven : ");
    printLinkedList(even);
}

int getMiddle(struct Node *head)
{
    struct Node *slow = NULL;
   struct Node *fast = NULL;

   // Logic :
   //Traverse linked list using two pointers. Move one pointer by one and other pointer by two.
   //When the fast pointer reaches end slow pointer will reach middle of the linked list.

   if(head == NULL)
   {
       return -1;
   }
   else
   {
       slow = head;
       fast = head;

       while(fast->next != NULL && fast->next->next != NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
       }
       printf("\nHi");
       return slow->data;
   }
}

struct Node * removeDuplicate(struct Node *first)
{
    struct Node *temp = NULL, *head = NULL, *head2 = NULL;
    head = first;
    while(head != NULL)
    {
        int karan = head->data;
        if(head->next == NULL)
        {
            break;
        }
        head2 = head->next;
    }
}
