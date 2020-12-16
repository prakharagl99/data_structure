//insertion before and after a nodes
#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node*next;
int data;
};
struct node*start;

void insertafter(struct node *head,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *preptr=(struct node*)malloc(sizeof(struct node));
	temp->data=6;
	ptr=head; 
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=temp;
	temp->next=ptr;
}

void insertbefore(struct node *head,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	struct node *preptr=(struct node*)malloc(sizeof(struct node));
	temp->data=6;
	ptr=head;
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=temp;
	temp->next=ptr;
}
void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}

void main()
{
	
	struct node *second;
	struct node *third;
	start=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	start->data=1;
	start->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	insertbefore(start,second->data);
	display(start);
	insertafter(start,second->data);
	display(start);
}

