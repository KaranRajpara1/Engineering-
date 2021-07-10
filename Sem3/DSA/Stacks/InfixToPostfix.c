#include<stdio.h>
struct MyChar
{
    char ch;
    struct MyChar *next;
};

struct MyChar *Infix=NULL,*Postfix=NULL,*Stack=NULL;

void strToLL();
void printLinkedList(struct MyChar *);
void addFirstBracket();
void InfixToPostfix();
int checkCharacter(char );
void push(char );
char pop();
void postfixString(char );
int operatorPriority(char);

void main()
{
    strToLL();

    addFirstBracket();

    InfixToPostfix();

    printLinkedList(Postfix);
}


void strToLL()
{
    char *str;
    int i=0;
    str = (char *)malloc(sizeof(char)*50);
    printf("\nEnter Prefix Expression : ");
    scanf("%s",str);

    struct MyChar *temp = NULL, *head = NULL;

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
    printLinkedList(Infix);
}

void printLinkedList(struct MyChar *head)
{
	while(head!=NULL)
	{
		printf("%c",head->ch);
		head=head->next;
	}
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

    infixHead = Infix ;

    while(infixHead != NULL)
    {
        if(checkCharacter(infixHead->ch) == 1) //  operand
        {
            postfixString(infixHead->ch);
        }
        else // Operator
        {
            if(operatorPriority(Stack->ch) < operatorPriority(infixHead->ch))
            {
                push(infixHead->ch);
            }
            else
            {
                while(operatorPriority(Stack->ch) >= operatorPriority(infixHead->ch))
                {
                    postfixString(pop());
                }
                push(infixHead->ch);
            }
        }
        infixHead = infixHead->next;
    }
   /* while(Stack->ch!='(')
	{
		postfixString(pop());
	}*/
}

int checkCharacter(char ch)
{
    switch(ch)
    {
        case '+' :
        case '-' :
        case '*' :
        case '/' :
        case '^' :
        case '%' :
            return 0;
            break;
        default :
            return 1;
            break;
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
    char ch;
    struct MyChar *temp = NULL;
    temp = Stack;
    ch = Stack->ch;
    Stack = Stack->next;
    free(temp);
    return ch;
}

void postfixString(char ch)
{
    struct MyChar *temp = NULL, *head = NULL;
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
        while(head != NULL)
        {
            head = head->next;
        }
        head->next = temp;
    }
}

int operatorPriority(char ch)
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
