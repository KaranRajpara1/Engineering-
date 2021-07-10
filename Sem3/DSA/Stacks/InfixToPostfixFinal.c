#include<stdio.h>

struct MyChar
{
    char ch;
    struct MyChar *next;
};

struct MyChar *Infix = NULL, *Postfix = NULL, *Stack = NULL;

void strToLinkedList();
void printLinkedList(struct MyChar *);
void addFirstBracket();
void InfixToPostfix();
int checkCharacter(char);
void postfixLL(char);
int priority(char);
void push(char);
char pop();

void main()
{
    strToLinkedList();
    addFirstBracket();
    InfixToPostfix();
    printf("\nPostfix String :\n");
    printLinkedList(Postfix);
}

void strToLinkedList()
{
    char *str;
    int i = 0;
    str = (char *)malloc(sizeof(char)*50);
    printf("\n========================");
    printf("\nInfix To Postfix");
    printf("\n========================");
    printf("\nEnter Infix String : ");
    scanf("%s",str);

    struct MyChar *temp = NULL, *head = NULL;
    while(*(str+i) != '\0')
    {
        temp = (struct Mychar *)malloc(sizeof(struct MyChar)*1);
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
        if(checkCharacter(infixHead->ch) == 1) // Operand
        {
            postfixLL(infixHead->ch);
        }
        else if(checkCharacter(infixHead->ch) == 2) //'('
        {
            push(infixHead->ch);
        }
        else if(checkCharacter(infixHead->ch) == 3) //')'
        {
            while(Stack->ch != '(')
            {
                postfixLL(pop());
            }
            char tmp = pop();
        }
        else // Operator
        {
            if(priority(infixHead->ch) > priority(Stack->ch))
            {
                push(infixHead->ch);
            }
            else
            {
                while(priority(infixHead->ch) <= priority(Stack->ch))
                {
                    postfixLL(pop());
                }
                push(infixHead->ch);
            }
        }
        infixHead = infixHead->next;
    }
    while(Stack->ch != '(')
    {
        postfixLL(pop());
    }
}

int checkCharacter(char ch)
{
    switch(ch)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
        case '%':
			return 0;
			break;
        case '(':
            return 2;
            break;
        case ')':
            return 3;
            break;
		default:
			return 1;
	}
}

void postfixLL(char ch)
{
    struct MyChar *temp = NULL, *head =NULL;
    temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
    temp->ch = ch;
    temp->next = NULL;
    if(Postfix == NULL)
    {
        Postfix = temp;
    }
    else
    {
        head = Postfix;
        while(head->next != NULL)
        {
            head = head->next;
        }
        head->next = temp;
    }
}

int priority(char ch)
{
    switch(ch)
	{
		case '(':
			return 0;
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default:
			return -1;
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

char pop()
{
    struct MyChar *temp = NULL;
    temp = Stack;
    char ch = Stack->ch;

    Stack = Stack->next;
    free(temp);
    return ch;
}
