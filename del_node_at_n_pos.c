#include <stdio.h>
#include <stdlib.h>
 
typedef struct mylist
{
  int data;
  struct mylist *link;
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
del_node(int pos)
{
	node* temp1=head;
	if(pos==1)
	{
		head=temp1->link;
		free(temp1);
		return;
	}
	int i;
	for(i=0;i<pos-2;i++)
	{
		temp1=temp1->link;
	}
	node*temp2=temp1->link;
	temp1->link=temp2->link;
	free(temp2);
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
  int i,n,x,pos;
 	printf("enter your choice 1: add node at end   2: delete node    3:exit \n");
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
 			printf("\n enter the number which you want to delete  \n ");
 			scanf("%d",&pos);
 			del_node(pos);
 			show();
 			break;
 			default:
 			printf("wrond choice, choose again \n");
 			break;
 		}
 			printf("\n  enter your choice 1: add node at end   2: delete node    3:exit \n");
 			scanf("%d",&n);
	}
	 
   return 1;
}
