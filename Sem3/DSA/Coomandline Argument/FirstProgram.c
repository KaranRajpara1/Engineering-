//Function
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	int i=0,sum=0;
	for(i=1;i<argc;i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("\nSUM = %d",sum);
	return 0;
}
