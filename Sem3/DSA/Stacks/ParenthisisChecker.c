#include<stdio.h>
#include<malloc.h>

struct Node
{
    char ch;
    struct Node *next;
};

struct Node  *Stack = NULL;
char *str;
int flag = 1;

void strToLL();
void printLL(struct Node *);
void chechParenthisis();
void push(char);
char pop();

void main()
{
    str = (char *)malloc(sizeof(char)*50);
    printf("\nEnter string : ");
    scanf("%[^\n]s",str);
    printf("\n%s",str);
    chechParenthisis();

    if(flag == 1)
    {
        printf("\nParentheses is balanced");
    }
    else if(flag == 0)
    {
        printf("\nParentheses is not balanced");
    }
}

void printLL(struct Node *head)
{
    printf("\n");
    while(head != NULL)
    {
        printf("%c ",head->ch);
        head = head->next;
    }
    printf("\n");
}

void chechParenthisis()
{
    struct Node *head = NULL;
    int i=0;
    while(*(str+i) != '\0')
    {
        printf("\nElement %c",*(str+i));
        if(*(str+i) == '(' || *(str+i) == '{' || *(str+i) == '[' )
        {
            push(*(str+i));
            printf("push element %c\n",*(str+i));

        }
        if(*(str+i) == ')' || *(str+i) == '}' || *(str+i) == ']')
        {
            if(Stack == NULL) //we found end bracket but there is no corrosponding opening bracket
            {
                printf("\nIn 2nd if if\n");
                flag = 0;
                break;
            }
            else
            {
                char temp = pop();
                printf("\nPop element = %c\n",temp);
                /*if(*(str+i) == ')' && (temp == '}' || temp == ']'))
                {
                    flag = 0;
                }
                if(*(str+i) == '}' && (temp == ')' || temp == ']'))
                {
                    flag = 0;
                }
                if(*(str+i) == ']' && (temp == '}' || temp == ')'))
                {
                    flag = 0;
                }*/
                if(*(str+i) == ')' && temp != '(')
                {
                    flag = 0;
                }
                if(*(str+i) == ']' && temp != '[')
                {
                    flag = 0;
                }
                if(*(str+i) == '}' && temp != '{')
                {
                    flag = 0;
                }
            }
        }
       i++;
    }
    if(Stack != NULL)
    {
        flag = 0;
    }
    //printLL(Stack);
}

void push(char ch)
{
    struct Node *temp = NULL;
    temp = (struct Node *)malloc(sizeof(struct Node)*1);
    temp->ch = ch;
    temp->next = NULL;
    if(Stack == NULL)
    {
        Stack = temp;
    }
    else
    {
        temp->next = Stack;
        Stack = temp;
    }
}

char pop()
{
    struct Node *temp = NULL;
    temp = Stack;
    char ch = temp->ch;
    Stack = Stack->next;
    free(temp);
    return ch;
}
