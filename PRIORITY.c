#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void chc();
void enq();
void exq();
void prq();


static int b=0,q,s[2][100];
int qu[1000];

main()
{
	int l=0,k,i;

	s[0][0] = 0;
	printf("Enter the no. of queues to be used : ");
	scanf("%d",&q);

	printf("\nEnter the size of each queue:\n");
	for(i=0;i<q;i++)
	{
		printf("Size of %d queue: ",i+1);
		scanf("%d",&k);
		l=l+k;
		s[0][i+1] = l;
		s[1][i+1] = l;
	}

	chc();
}



void chc()
{
	char ch;
	printf("\n\nChoose the operation to be performed\n1. Enter an Element\n2. Remove an element\n3. Print queue\n4. Exit\n\nEnter your choice: ");
	fflush(stdin);
	scanf ("%c",&ch);
	fflush (stdin);
	switch(ch)
	{
		case '1':
			enq();
			break;

		case '2':
			exq();
			break;

		case '3':
			prq();
			break;

		case '4':
			exit (0);
			break;

		default:
			printf ("Invalid!!");
			chc;
	}
}



void enq()
{
	printf ("\n\t\tINSERT\n");
	int n,m,a;
	int t1,t2;

	printf("\nEnter the queue no. to insert the element into: ");
	scanf("%d",&a);

	printf("Enter the element to be entered: ");
	scanf("%d",&n);

	qu[s[1][a-1]]=n;

	s[1][a-1] = s[1][a-1] + 1;;
	chc();
}

void exq()
{
	printf ("\n\t\tDELETE");
	int i,a;
	char c;

	printf("\nEnter the no. of queue from which you want to delete the element : ");
	scanf("%d",&a);

	if(s[1][a-1] == s[0][a-1])
	{
		printf("The queue is empty\n");
	}
	else
	{
		printf("The element removed is %d\n",qu[s[0][a-1]]);

		for(i = s[0][a-1] ; i < (s[1][a-1])-1 ; i++)
		{
			qu[i] = qu[i+1];
		}
		s[1][a-1] = s[1][a-1] - 1;
	}

	chc();
}



void prq()
{
	printf ("\n\t\tPRINT\n\n");
	int i=0,a,j;

	printf("The elements in the queue are:\n");

	for(j=0;j<q;j++)
	{
		printf("Queue %d \n",j+1);

		if(s[0][j] == s[1][j])
		{
			printf("\nThe queue is empty");
		}
		else
		{
			for(i = s[0][j] ; i < s[1][j] ; i++)
			{
				printf("%d \n",qu[i]);
			}
		}
		printf("\n\n");
	}

	chc();

}
