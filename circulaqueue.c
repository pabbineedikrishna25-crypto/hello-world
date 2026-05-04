#include<stdio.h>
#include<stdlib.h>
#define MAX_size 3
int queue[MAX_size];
int front=-1,rear=-1;
int isfull()
{
	return (rear+1)%MAX_size==front;
}
int isempty()
{
	return front==-1;
}
void enqueue()
{
	int data;
	printf("\n enter element");
	scanf("%d",&data);
	if(isfull())
	{
		printf("queue overflow \n");
		return ;
	}
	if(front==-1)
	{
		front=0;
	}
    rear=(rear+1)%MAX_size;
	queue[rear]=data;
	printf("element %d inserted \n ",data);
}
void dequeue()
{
	if(isempty())
	{
	   printf("queue underflow \n");
	   return ;	
	}
	int data=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front =(front+1)%MAX_size;
	}
	printf("\n deleted element is = %d",data);
}
void display()
{
	if(isempty())
	{
		printf("queue is empty \n");
		return ;
	}
	printf(" queue element :");
	int i=front;
	while(i!=rear)
	{
		printf(" %d",queue[i]);
		i=(i+1)%MAX_size;
	}
	printf("%d\n",queue[rear]);
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n \t \t \t QUEUE OPERATIONS ARE...");
		printf("\n \t \t \t 1.insert");
		printf("\n \t \t \t 2.delete");
		printf("\n \t \t \t 3.display");
		printf("\n \t \t \t 4.exit");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			       break;      
			default:printf("\n INVALID CHOICE ,try again:");      
		}
		
	}
}
