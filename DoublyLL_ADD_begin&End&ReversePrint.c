#include <stdio.h>
#include <stdlib.h>
 
typedef struct mylist
{
  int data;
  struct mylist *next;
  struct mylist *prev;
}node;
 
node* head;

void add_at_beginning(int x)
{
	node *newnode = (node*) malloc(sizeof(node));
	newnode->data =x;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
void add_at_end(int x)
{
	node *temp = head;
    node* newnode = (node*) malloc(sizeof(node));
    newnode->data  = x;
    newnode->next = NULL;
    newnode->prev=NULL;
    if (head == NULL)
    {
       head = newnode;
       return;
    }
    while (temp->next != NULL)
    {
    	temp = temp->next;
	}
    temp->next = newnode;
    newnode->prev=temp;
    
}
void show()
{
	node*temp=head;
	printf("\nCreated Linked list is:    ");
  while (temp != NULL)
  {
     printf(" %d ", temp->data);
     temp = temp->next;
  }
}

void  reverseprint()
{
	node *temp=head;
	if(temp==NULL)
	{
		return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("\nlinked list in reverse order is   ");
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->prev;
	}
}
int main()
{  
  int i,n,x;
  head=NULL;
 	printf("\nenter your choice.\n1 : Add node at begining, 2: Add node at end, \n3: Print LL in reverse order, 4: exit\n");
 	scanf("%d",&n);
 	while(n!=4)
 	{
 	switch(n)
 	{
 		case 1:
 		printf("\nenter the values for nodes   ");
 		scanf("%d",&x);
 		add_at_beginning(x);
 		show();
 		break;
 		case 2:
 		printf("\nenter the values for nodes   ");
 		scanf("%d",&x);
 		add_at_end(x);
 		show();	
 		break;
 		case 3:
 		reverseprint();
		break;
		default:
		printf("wrong choice, choose again \n");
	 }
	 
	printf("\nenter your choice.\n1 : Add node at begining, 2: Add node at end, \n3: Print LL in reverse order, 4: exit\n");
 	scanf("%d",&n);
 }
 
  return 1;
}
