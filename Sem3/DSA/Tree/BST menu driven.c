#include <stdio.h>
#include <malloc.h>

struct Btree
{
	int value;
	struct Btree *left;
	struct Btree *right;
};

struct Btree *root=NULL,*head=NULL,*temp=NULL;

void createBST(int);

struct Btree * InsertNode(struct Btree *,struct Btree *);
int searchNode(struct Btree *, int );
void printBSTree_PreOrder(struct Btree *);
void printBSTree_InOrder(struct Btree *);
void printBSTree_PostOrder(struct Btree *);
int main()
{
	int n;
	printf("\n How many nodes you want to add in BS Tree ?");
	scanf("%d",&n);
	//Adding Node Using Recursion
	while(n>0)
	{
		temp = (struct Btree *)malloc(sizeof(struct Btree)*1);
		printf("\n Enter Value for Node : ");
		scanf("%d",&(temp->value));
		temp->left=NULL;
		temp->right=NULL;
		
		head=root;
		root = InsertNode(head,temp);
		
		n--;
	}
	
	
	//Printing All Orders
	printf("\n Pre Order : ");
	head=root;
	printBSTree_PreOrder(head);
	printf("\n In Order : ");
	head=root;
	printBSTree_InOrder(head);
	printf("\n Post Order : ");
	head=root;
	printBSTree_PostOrder(head);
	
	if(searchNode(head,9))
	{
		printf("\n FOUND ");
	}
	else
	{
		printf("\n Not FOUND ");
	}
	return 0;
}

int searchNode(struct Btree *head,int n)
{
	static int i=0;
	if(head==NULL)
	{
		return i;
	}
	searchNode(head->left,n); 
	if(n==head->value)
	{
		i=i+1;
		return i;
	}
	searchNode(head->right,n); //Right
}

void printBSTree_InOrder(struct Btree *head)
{
	if(head==NULL)
	{
		return;
	}
	printBSTree_InOrder(head->left); //Left
	printf("%d -> ",head->value); //Print Root
	printBSTree_InOrder(head->right); //Right
}
void printBSTree_PreOrder(struct Btree *head)
{
	if(head==NULL)
	{
		return;
	}
	printf("%d -> ",head->value); //Print Root
	printBSTree_PreOrder(head->left); //Left
	printBSTree_PreOrder(head->right); //Right
}

void printBSTree_PostOrder(struct Btree *head)
{
	if(head==NULL)
	{
		return;
	}
	printBSTree_PostOrder(head->left); //Left
	printBSTree_PostOrder(head->right); //Right
	printf("%d -> ",head->value); //Print Root
}

struct Btree * InsertNode(struct Btree *head,struct Btree *temp)
{
	if(head==NULL)
	{
		return temp;	
	}
	if(temp->value < head->value)
	{
		head->left= InsertNode(head->left,temp);
	}
	else
	{
		head->right= InsertNode(head->right,temp);
	}
}





