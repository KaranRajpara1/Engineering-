#include<stdio.h>
#include<malloc.h>

// ***** Circular Queue ******

//Global Declaration Section
//Structure called Node
struct Node
{
	int value;
	struct Node *next;
}*front=NULL,*rear=NULL;

int queueSize;
int currSize=-1;

//Function Declaration
void enqueue(int);
void dequeue();
void printQueue();
void queueOperations();


int main()
{
	int choice,data;
	printf("\n Enter Your Queue Size :");
	scanf("%d",&queueSize);
	
	do
	{
		queueOperations();
		printf("\n Select Functions :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("\n Enter Value : ");
					scanf("%d",&data);
					enqueue(data); //Circular Queue
				break;
			case 2:
					dequeue();
				break;
			case 3:
					printQueue();
				break;
		}
		
	}while(choice!=4);
	return 0;
}
void queueOperations()
{
	printf("\n ==========================");
	printf("\n      Circular Queue ");
	printf("\n ==========================");
	printf("\n   1 - Enqueue");
	printf("\n   2 - Dequeue");
	printf("\n   3 - Print");
	printf("\n   4 - Exit");
	printf("\n ==========================");
}

void enqueue(int n) //Circular Queue
{
	struct Node *temp=NULL;
	if(currSize==queueSize-1)
	{
		printf("\n Queue is Full");
	}
	else
	{
		currSize++;
		
		temp = (struct Node *)malloc(sizeof(struct Node)*1);
		//temp->next=NULL;
		temp->next=front;
		temp->value=n;
		
		//Circular Queue
		if(front == NULL && rear==NULL)
		{
			front=temp;
			rear=temp;
			//rear->next=front;
		}
		else
		{
			rear->next=temp;
			rear=temp; // rear = rear->next
			//rear->next=front;
		}
	}
}
void dequeue()
{
	struct Node *temp=NULL;
	if(currSize==-1)
	{
		printf("\n Queue is Empty");
	}
	else
	{
		currSize --;
		temp = front;
		//rear->next=front->next;
		front = front->next; // New front Node
		rear->next = front;
	
		
		printf("\n %d is dequeue ",temp->value);
		free(temp);
		
		if(front == NULL)
		{
			rear = NULL;
		}
	}
}
void printQueue()
{
	struct Node *head=NULL;
	if(currSize==-1)
	{
		printf("\n Queue is Empty");
	}
	else
	{
		head=front;
		do
		{
			printf("%d -> ",head->value);
			head=head->next;
		}while(head!=front);
	}
}

