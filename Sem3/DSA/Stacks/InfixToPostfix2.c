#include<stdio.h>
#include<malloc.h>

struct MyChar
{
    char ch;
    struct MyChar *next;
};

struct MyChar *Infix = NULL;
struct MyChar *Postfix = NULL;
struct MyChar *Stack = NULL;

void strToLinkedList();
void printLLinkedList(struct MyChar *);
void addFirstBracket();
void InfixToPostfix();
int checkCharacter(char);
void push(char);

void main()
{
    struct MyChar *head = NULL;

    strToLinkedList();

    printf("\nPrefix string : ");
    head = Infix;
    printLinkedList(head);

    addFirstBracket();

    InfixToPostfix();

}

void strToLinkedList()
{
    char *str;
    int i=0;
    str = (char *)malloc(sizeof(char)*50);

    struct MyChar *temp = NULL;

    struct MyChar *head = NULL;

    printf("Enter Infix String : ");
    scanf("%s",str);

    //printf("\n%s",str);

    while(*(str+i) != '\0')
    {
        temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
        temp->ch = *(str+i);
        temp->next = NULL;
        if(Infix == NULL)
        {
            Infix = temp;
        }
        else
        {
            head = Infix;
            while(head->next != NULL)
            {
                head = head->next;
            }
            head->next = temp;
        }
        i++;
    }
}

void printLinkedList(struct MyChar *head)
{
    printf("\n");
    while(head != NULL)
    {
        printf("%c",head->ch);
        head = head->next;
    }
    printf("\n");
}

void addFirstBracket()
{
    struct MyChar *temp = NULL;
    temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
    temp->ch = '(';
    temp->next = NULL;

    Stack = temp;
}

void InfixToPostfix()
{
    struct MyChar *temp = NULL, *infixHead = NULL, *postfixHead = NULL;

    infixHead = Infix;
    while(infixHead != NULL)
    {
        if(checkCharacter(infixHead->ch)) // Operand
        {
            printf("t");
            push(infixHead->ch);
        }
        else // Operator
        {
            printf("d");
        }
        infixHead = infixHead->next;
    }
}

int checkCharacter(char ch)
{
    switch(ch)
    {
        case '+' :
        case '-' :
        case '*' :
        case '/':
        case '^' :
        case '%' :
            return 0;
            break;
        default :
            return 1;
    }
}

void push(char ch)
{
    struct MyChar *temp = NULL;
    temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
    temp->ch = ch;
    temp->next = Stack;
    Stack = temp;
}
