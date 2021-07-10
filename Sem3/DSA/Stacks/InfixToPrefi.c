#include<stdio.h>

struct MyChar
{
    char ch;
    struct MyChar *next;
};

struct MyChar *Infix = NULL, *Prefix = NULL, *Stack = NULL;

void strToLinkedList();
void printLL(struct MyChar *);
void addFirstBracket();
void InfixToPrefix();
int checkCharacter(char);
void prefixLL(char);
int priority(char);
void push(char);
char pop();

void main()
{
    strToLinkedList();
    addFirstBracket();
    InfixToPrefix();
    printLL(Prefix);
}

void strToLinkedList()
{
    char *str;
    printf("\nEnter Infix String : ");
    str = (char *)malloc(sizeof(char)*50);
    scanf("%s",str);

    //Creating LinkedList
    //We need reverse string so insert at first

    struct MyChar *temp = NULL;
    int i = 0;
    while(*(str+i) != '\0')
    {
        temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
        temp->next = NULL;
        temp->ch = *(str+i);

        if(Infix == NULL)
        {
            Infix = temp;
        }
        else
        {
            temp->next = Infix;
            Infix = temp;
        }
        i++;
    }
    //printLL(Infix);

}

void printLL(struct MyChar *head)
{
    printf("\n");
    while(head != NULL)
    {
        printf("%c ",head->ch);
        head = head->next;
    }
    printf("\n");
}

void addFirstBracket()
{
    struct MyChar *temp = NULL;
    temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
    temp->next = NULL;
    temp->ch = '(';

    Stack = temp;
}

void InfixToPrefix()
{
    struct MyChar *temp = NULL, *infixHead = NULL, *prefixHead = NULL;

    infixHead = Infix;
    while(infixHead != NULL)
    {
        if(checkCharacter(infixHead->ch) == 1) // Operand
        {
            prefixLL(infixHead->ch);
        }
        else if(checkCharacter(infixHead->ch) == 2) // '(' => treat as ')' in postfix
        {
            while(Stack->ch != ')')
            {
                prefixLL(pop());
            }
            pop();
        }
        else if(checkCharacter(infixHead->ch) == 3)
        {
            push(infixHead->ch);
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
                    prefixLL(pop());
                }
                push(infixHead->ch);
            }
        }
        infixHead = infixHead->next;
    }
    while(Stack->ch != '(')
    {
        prefixLL(pop());
    }
    //printLL(Prefix);
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

void prefixLL(char ch)
{
    struct MyChar *temp = NULL, *head = NULL;
    temp = (struct MyChar *)malloc(sizeof(struct MyChar)*1);
    temp->ch = ch;
    temp->next = NULL;

    if(Prefix == NULL)
    {
        Prefix = temp;
    }
    else
    {
        /*head = Prefix;
        while(head->next != NULL)
        {
            head = head->next;
        }
        head->next = temp;*/
        //at last we need to print it reverse so we can add it at front here only
        temp->next = Prefix;
        Prefix = temp;
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
    Stack = Stack->next;
    char ch = temp->ch;
    free(temp);
    return ch;
}
