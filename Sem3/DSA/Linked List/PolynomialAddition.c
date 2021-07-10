#include<stdio.h>
struct Polynomial
{
    int power;
    int coEfficient;
    struct Polynomial *next;
};

void Polynomial(struct Polynomial *p );
struct Polynomial * createLinkedList(int);
struct Polynomial * Addition(struct Polynomial *,struct Polynomial *);
struct Polynomial * Subtraction(struct Polynomial *,struct Polynomial *);

void main()
{
    struct Polynomial *first = NULL;
    struct Polynomial *second = NULL;
    struct Polynomial *addition = NULL;
    struct Polynomial *subtraction = NULL;
    int n;
    printf("\nEnter number of term in first polynomial : ");
    scanf("%d",&n);
    printf("\nEnter first polynomial \n");
    first = createLinkedList(n);
    printLinkedList(first);

    printf("\nEnter number of term in second polynomial : ");
    scanf("%d",&n);
    printf("\nEnter second polynomial \n");
    second = createLinkedList(n);
    printLinkedList(second);

    printf("\n Addition polynomial is :");
    addition = Addition(first,second); // Addition is function and addition is struct Polynomial
    printLinkedList(addition);

    printf("\n Subtraction polynomial is :");
    subtraction = Subtraction(first,second); // Subtraction is function and subtraction is struct Polynomial
    printLinkedList(subtraction);
}

void printLinkedList(struct Polynomial *p)
{
    printf("\n");
    while(p != NULL)
    {
        printf("%d*x^(%d) + ",p->coEfficient,p->power);
        p = p->next;
    }
    printf("\n");
}

struct Polynomial * createLinkedList(int n)
{
    int i;
    struct Polynomial *first = NULL;
    struct Polynomial *temp = NULL;
    struct Polynomial *head = NULL;
    for(i=n;i>=0;i--)
    {
        temp = (struct Polynomail *)malloc(sizeof(struct Polynomial)*1);
        //printf("\nEnter power :");
        //scanf("%d",&(temp->power));
        temp->power = i;
        printf("\nEnter coefficient for power %d : ",i);
        scanf("%d",&(temp->coEfficient));
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
    }
    return first;
}

struct Polynomial * Addition(struct Polynomial * first,struct Polynomial *second)
{

    struct Polynomial *ahead = NULL;
    struct Polynomial *head = NULL;
    struct Polynomial *shead = NULL;
    struct Polynomial *addition = NULL;

    head = first;
    shead = second;

    if(first == NULL && second == NULL)
    {
        return addition;
    }
    else if(first != NULL && second == NULL)
    {
        struct Polynomial *tmp = NULL;
        while(first != NULL)
        {
            tmp=(struct Polynomial *)malloc(sizeof(struct Polynomial));
            tmp->coEfficient=first->coEfficient;
            tmp->power=first->power;
            tmp->next=NULL;
            if (addition==NULL)
            {
                addition=tmp;
            }
            else
            {
                ahead=addition;
                while(ahead->next!=NULL)
                {
                    ahead = ahead->next;
                }
                ahead->next=tmp;
            }
            first=first->next;
        }
    }

    else if(first==NULL && second!=NULL)
    {
        struct Polynomial *tmp = NULL;
        while(second != NULL)
        {
            tmp=(struct Polynomial *)malloc(sizeof(struct Polynomial));
            tmp->coEfficient = second->coEfficient;
            tmp->power = second->power;
            tmp->next = NULL;
            if (addition == NULL)
            {
                addition = tmp;
            }
            else
            {
                ahead=addition;
                while(ahead->next != NULL)
                {
                    ahead = ahead->next;
                }
                ahead->next=tmp;
            }
            second=second->next;
        }
    }

    else
    {


        while(head != NULL && shead != NULL)
        {
            struct Polynomial *temp = NULL;
            temp = (struct Polynomial *)malloc(sizeof(struct Polynomial)*1);
            temp->next = NULL;
            if(head->power > shead->power)
                {
                    temp->power = head->power;
                    temp->coEfficient = head->coEfficient;

                    head = head->next;
                }
                else if(head->power < shead->power)
                {
                    temp->power = shead->power;
                    temp->coEfficient = shead->coEfficient;

                    shead = shead->next;
                }
                else
                {
                    temp->power = head->power;
                    temp->coEfficient = head->coEfficient + shead->coEfficient;
                    head = head->next;
                    shead = shead->next;
                }
            if(addition == NULL)
            {
                addition = temp;
            }
            else
            {

                ahead = addition;
                while(ahead->next != NULL)
                {
                    ahead = ahead->next;
                }
                ahead->next = temp;
            }
        }
    }
    return addition;
}


struct Polynomial * Subtraction(struct Polynomial * first,struct Polynomial *second)
{
    struct Polynomial *ahead = NULL;
    struct Polynomial *head = NULL;
    struct Polynomial *shead = NULL;
    struct Polynomial *subtraction = NULL;

    head = first;
    shead = second;

    if(first == NULL && second == NULL)
    {
        return subtraction;
    }
    else if(first != NULL && second == NULL)
    {
        struct Polynomial *tmp = NULL;
        while(first != NULL)
        {
            tmp=(struct Polynomial *)malloc(sizeof(struct Polynomial));
            tmp->coEfficient=first->coEfficient;
            tmp->power=first->power;
            tmp->next=NULL;
            if (subtraction==NULL)
            {
                subtraction=tmp;
            }
            else
            {
                ahead = subtraction;
                while(ahead->next!=NULL)
                {
                    ahead = ahead->next;
                }
                ahead->next=tmp;
            }
            first=first->next;
        }
    }

    else if(first==NULL && second!=NULL)
    {
        struct Polynomial *tmp = NULL;
        while(second != NULL)
        {
            tmp=(struct Polynomial *)malloc(sizeof(struct Polynomial));
            tmp->coEfficient = second->coEfficient;
            tmp->power = second->power;
            tmp->next = NULL;
            if (subtraction == NULL)
            {
                subtraction = tmp;
            }
            else
            {
                ahead = subtraction;
                while(ahead->next != NULL)
                {
                    ahead = ahead->next;
                }
                ahead->next=tmp;
            }
            second=second->next;
        }
    }

    else
    {


        while(head != NULL && shead != NULL)
        {
            struct Polynomial *temp = NULL;
            temp = (struct Polynomial *)malloc(sizeof(struct Polynomial)*1);
            temp->next = NULL;
            if(head->power > shead->power)
                {
                    temp->power = head->power;
                    temp->coEfficient = head->coEfficient;

                    head = head->next;
                }
                else if(head->power < shead->power)
                {
                    temp->power = shead->power;
                    temp->coEfficient = shead->coEfficient;

                    shead = shead->next;
                }
                else
                {
                    temp->power = head->power;
                    temp->coEfficient = head->coEfficient - shead->coEfficient;
                    head = head->next;
                    shead = shead->next;
                }
            if(subtraction == NULL)
            {
                subtraction = temp;
            }
            else
            {

                ahead = subtraction;
                while(ahead->next != NULL)
                {
                    ahead = ahead->next;
                }
                ahead->next = temp;
            }
        }
    }
    return subtraction;
}
