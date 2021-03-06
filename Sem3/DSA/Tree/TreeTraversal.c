#include<stdio.h>
#include<malloc.h>

struct Tree
{
    struct Tree *left;
    int data;
    struct Tree *right;
};


void menu(void);
struct Tree * insert(struct Tree *,int);
void inorder(struct Tree *);
void postorder(struct Tree *);
void preorder(struct Tree *);

int main()
{
    struct Tree *tree = NULL;
    int n,data;
    while(n != 5)
    {
        menu();
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("\nEnter value:");
            scanf("%d",&data);
            tree = insert(tree,data);
            break;
        case 2:
            printf("\nIn order: ");
            inorder(tree);
            printf("\n");
            break;
        case 3:
            printf("\nPre order: ");
            preorder(tree);
            break;
        case 4:
            printf("\n post order: ");
            postorder(tree);
            break;
        case 5:
            break;
        default :
            printf("\nInvalid choice");
            break;
        }

    }
    return 0;
}

void menu()
{
    printf("\n\n============================");
    printf("\n Tree Menu Driven Program");
    printf("\n============================");
    printf("\n1.Insert Node");
    printf("\n2.In-order");
    printf("\n3.Pre-order");
    printf("\n4.Post-order");
    printf("\n5.Exit");
    printf("\n============================");
    printf("\nEnter choice: ");
}

struct Tree * insert(struct Tree *tree,int n)
{
    struct Tree *temp = NULL , *head = NULL, *parent = NULL;
    temp = (struct Tree *)malloc(sizeof(struct Tree)*1);
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    if(tree == NULL)
    {
        tree = temp;
    }
    else
    {
        head = tree;
        while(head != NULL)
        {
            parent = head;
            if(n < head->data)
            {
                head = head->left;
            }
            else
            {
                head = head->right;
            }
        }
        if(n < parent->data)
        {
            parent->left = temp;
        }
        else
        {
            parent->right = temp;
        }

    }
    return tree;
}

void inorder(struct Tree *tree)
{
    while(tree!=NULL)
    {
        inorder(tree->left);
        printf("%d->",tree->data);
        inorder(tree->right);
        return;
    }
}

void postorder(struct Tree *tree)
{
    while(tree!=NULL)
    {
        postorder(tree->left);
        postorder(tree->right);
        printf("%d->",tree->data);
        return;
    }
}

void preorder(struct Tree *tree)
{
    while(tree!=NULL)
    {
        printf("%d->",tree->data);
        preorder(tree->left);
        preorder(tree->right);
        return;
    }
}


