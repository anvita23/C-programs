#include<stdio.h>
#define MAX 50
void insert();
void delete();
void display();
int queue[MAX];
int rear=-1;
int front=-1;
main()
{
int choice;
while(1)
{
printf("1.Insert element\n");
printf("2.Delete element\n");
printf("3.Display elements\n");
printf("4.Quit\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:exit(1);
default:printf("Wrong choice\n");
}
}
}
void insert()
{
int add;
if(rear==MAX-1)
printf("Queue overflow\n");
else
{
if(front==-1)
front=0;
printf("Insert element");
scanf("%d",&add);
rear=rear+1;
queue[rear]=add;
}
}
void delete()
{
if(front==-1||front>rear)
{
printf("Queue underflow\n");
return;
}
else
{
printf("Element deleted from queue is %d\n",queue[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
printf("Queue is empty\n");
else
{
printf("Queue is:\n");
for(i=front;i<=rear;i++)
printf("%d ",queue[i]);
printf("\n");
}
}
