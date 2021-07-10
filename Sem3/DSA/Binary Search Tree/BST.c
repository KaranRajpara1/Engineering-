#include<stdio.h>

struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL,*head = NULL;

struct Node *createNode();
void createBST(struct Node *);
void InOrder(struct Node *);

void main()
{
    int n;
    printf("\nEnter Number of nodes: ");
    scanf("%d",&n);

    while(n>0)
    {
        createBST(createNode());
        n--;
    }
    printf("\nInorder:\n");
    head = root;
    InOrder(head);
}

struct Node *createNode()
{
    struct Node *temp = NULL;
    temp = (struct Node *)malloc(sizeof(struct Node)*1);
    printf("\nEnter node value:");
    scanf("%d",&(temp->value));
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void createBST(struct Node *temp)
{
    head = root;

    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        while((head->left != NULL && temp->value < head->value) || (head->right != NULL && temp->value > head->value))
    {
        if(temp->value < head->value)
        {
            head = head->left;
        }
        else
        {
            head = head->right;
        }
    }
        if(temp->value < head->value)
        {
            head->left = temp;
        }
        else
        {
            head->right = temp;
        }
    }
}

void InOrder(struct Node *head)
{
    if(head == NULL)
    {
        return;
    }
    InOrder(head->left);
    printf("%d->",head->value);
    InOrder(head->right);
}
