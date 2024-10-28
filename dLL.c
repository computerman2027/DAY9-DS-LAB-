#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* prev;
	struct node* next;
}Node;

Node* head=NULL;

Node* createNode(int item)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data=item;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}

void insert_beg(int data)
{
	Node* newnode=createNode(data);
	newnode->next=head;
	if(head!=NULL)
	{
		head->prev=newnode;
	}
	head=newnode;
}

void insert_end(int data)
{
	Node* newnode=createNode(data);
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
	int ch,val;
	while(1)
	{
		printf("1. Insert at begining\n2. Insert at end\n3. delete at begining\n4. delete at end\n5. display\n6. Exit\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value to be inserted : ");
				scanf("%d",&val);
				insert_beg(val);
				break;
			case 2:
				printf("Enter value to be inserted : ");
				scanf("%d",&val);
				insert_end(val);
				break;
			case 3:
				delete_beg();
				break;
			case 4:
				delete_end();
				break;
			case 5:
				display();
				break;
			case 6:
				printf("End of Program\n");
				return 0;
			default:
			printf("INVALID Input\n");		
		}		
	}
}
