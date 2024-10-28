#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* prev;
	struct node* next;
}Node;

Node* head=NULL;

Node* createNode(int data)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data=item;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}

void insert_beg(int data)
{
	Node* newnode=createNoode(data);
	newnode->next=head;
	if(head!=NULL)
	{
		head->prev=newnode
	}
	head=newnode;
}

void insert_end(int data)
{
	Node* newnode=createNoode(data);
	if(head==NULL)
	{
		head=newnode;
		return;	
	}	
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	temp->next->prev=temp;
}

void delete_beg()
{
	if(head==NULL)
	{
		printf("Linked List empty. Nothing to be deleted\n");
		return;
	}
	Node* del=head;
	head=head->next
	if(head!=NULL)
	{
		head->prev=NULL;
	}
	free(del);
}

void delete_end()
{
	if(head==NULL)
	{
		printf("Linked List empty. Nothing to be deleted\n");
		return;
	}
	Node* del;
	if(head->next==NULL)
	{
		del=head;
		head=NULL;
	}
	else
	{
		Node* temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		del=temp->next;
		temp->next=NULL;
	}
	free(del);
}

voide display()
{
	if(head==NULL)
	{
		printf("Linked List empty. Nothing to be displayed\n");
		return;
	}
	Node* temp= head;
	while(temp!=NULL)
	{
		printf(temp->next==NULL?"%d\n":"%d <-> ",temp->data);
		temp = temp->next;
	}
}


int main()
{
	while(1)
	{
		
	}
}
