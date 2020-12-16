#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start;

void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}

void delafter(struct node *head, int val)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *preptr=(struct node*)malloc(sizeof(struct node));
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	preptr=ptr; 
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	temp=ptr->next;
	preptr->next=temp;
	free(ptr);
}

void delbefore(struct node *head,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *preptr=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	preptr=ptr; 
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	temp=ptr->next;
	preptr->next=temp;
	free(ptr);
}

void main()
{
	int i;
	start=(struct node*)malloc(sizeof(struct node));
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	start->data=1;
	start->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	display(start);
	delbefore(start,3);
	display(start);
	printf("\n");
	delafter(start,1);
	display(start);
	
}
