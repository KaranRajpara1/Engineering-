#include<stdio.h>
#include<malloc.h>
// Create Linked List (Polynomial)
struct Node
{
    int n_power;
    int n_coef;
    struct Node *next;
};
struct Node * createLL(int );
void printLL(struct Node *);
struct Node * addition(struct Node *,struct Node *);
struct Node * subtraction(struct Node *,struct Node *);

int main()
{
    struct Node *first=NULL, *head=NULL, *third=NULL, *second=NULL, *sub=NULL;
    int no;
    printf("\n Enter Highest Power of 1st Polynomial : ");
    scanf("%d",&no);
    first = createLL(no);
    printf("\n Enter Highest Power of 2nd Polynomial : ");
    scanf("%d",&no);
    second = createLL(no);
    printf("\n 1st Equation \n");
    head=first;
    printLL(head);
    printf("\n 2nd Equation \n");
    head=second;
    printLL(head);
    third=addition(first,second);
    printf("\n Addition is \n");
    head=third;
    printLL(head);
    sub=subtraction(first,second);
    printf("\n Subtraction is \n");
    head=sub;
    printLL(head);
    return 0;
}
struct Node * addition(struct Node *first,struct Node *second)
{
    struct Node *fhead=NULL, *shead=NULL, *temp=NULL, *third=NULL;
    //Write your logic here
    struct Node *ahead = NULL;
    struct Node *head = NULL;

    head = first;
    shead = second;
    while(head != NULL || shead != NULL)
    {
        struct Node *temp = NULL;
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->next = NULL;
        if(head->n_power > shead->n_power)
            {
                temp->n_power = head->n_power;
                temp->n_coef = head->n_coef;

                head = head->next;
            }
            else if(head->n_power < shead->n_power)
            {
                temp->n_power = shead->n_power;
                temp->n_coef = shead->n_coef;

                shead = shead->next;
            }
            else
            {
                temp->n_power = head->n_power;
                temp->n_coef = head->n_coef + shead->n_coef;
                head = head->next;
                shead = shead->next;
            }
        if(third == NULL)
        {
            third = temp;
        }
        else
        {

            ahead = third;
            while(ahead->next != NULL)
            {
                ahead = ahead->next;
            }
            ahead->next = temp;
        }
    }
    return third;
}

struct Node * subtraction(struct Node *first,struct Node *second)
{
    struct Node *fhead=NULL, *shead=NULL, *temp=NULL, *third=NULL;
    //Write your logic here
    struct Node *ahead = NULL;
    struct Node *head = NULL;

    head = first;
    shead = second;
    while(head != NULL || shead != NULL)
    {
        struct Node *temp = NULL;
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->next = NULL;
        if(head->n_power > shead->n_power)
            {
                temp->n_power = head->n_power;
                temp->n_coef = head->n_coef;

                head = head->next;
            }
            else if(head->n_power < shead->n_power)
            {
                temp->n_power = shead->n_power;
                temp->n_coef = -(shead->n_coef);

                shead = shead->next;
            }
            else
            {
                temp->n_power = head->n_power;
                temp->n_coef = head->n_coef - shead->n_coef;
                head = head->next;
                shead = shead->next;
            }
        if(third == NULL)
        {
            third = temp;
        }
        else
        {

            ahead = third;
            while(ahead->next != NULL)
            {
                ahead = ahead->next;
            }
            ahead->next = temp;
        }
    }
    return third;
}

void printLL(struct Node *head)
{
    while(head!=NULL) // Till End of Linked List
    {
        printf("%d*x^(%d) + ",head->n_coef,head->n_power);
        head= head->next; // How to move to Next Node
    }
}
struct Node * createLL(int no)
{
    struct Node *first=NULL, *head=NULL, *temp=NULL;
    while(no>=0)
    {
        //Create New Node
        temp = (struct Node *)malloc(sizeof(struct Node)*1);
        temp->next=NULL;printf("\n Enter Power : ");
        scanf("%d",&(temp->n_power));
        printf("\n Enter Co-effcient : ");
        scanf("%d",&(temp->n_coef));
        //Add Node in LL
        if(first == NULL) // if LL is Empty
        {
            first = temp;
        }
        else  //if LL is not empty
        {
            head=first; // Transfering value of first into head
            while(head->next!=NULL)
            {
                head=head->next;
            }
            head->next=temp;
        }
        no--;
    }
    return first;
}
