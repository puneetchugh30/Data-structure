#include <stdio.h>
#include <stdlib.h>
 
typedef struct mylist
{
  int data;
  struct node *link;
}node;
 
node* head = NULL;
 
void add_at_end(int x)
{
	node *temp = head;
    node* new = (node*) malloc(sizeof(node));
    new->data  = x;
    new->link = NULL;
    if (head == NULL)
    {
       head = new;
       return;
    }
    while (temp->link != NULL)
    {
    	temp = temp->link;
	}
    temp->link = new;
    
}
void reverse()
{
	node* current, *prev,*next;
	prev=NULL;
	current=head;
	while(current!=NULL)
	{
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}	
	head=prev;
}

void show()
{
	node*temp=head;
	printf("\nCreated Linked list is:    ");
  while (temp != NULL)
  {
     printf(" %d ", temp->data);
     temp = temp->link;
  }
}
int main()
{  
  int i,n,x;
 	printf("enter your choice 1: add node at end   2: Reverse list   3:exit \n");
 	scanf("%d",&n);
 	while(n!=3)
 	{
	    switch(n)
	    {
			case 1:
			printf("\nenter the values for nodes   ");
 			scanf("%d",&x);
 			add_at_end(x);
 			show();
 			break;
 			case 2:
 			reverse();
 			show();
 			break;
 			default:
 			printf("wrond choice, choose again \n");
 			break;
 		}
 			printf("\n  enter your choice 1: add node at end   2: Reverse list   3:exit \n");
 			scanf("%d",&n);
	}
	 
   return 1;
}
