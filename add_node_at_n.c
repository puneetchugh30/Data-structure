#include <stdio.h>
#include <stdlib.h>
 
typedef struct mylist
{
  int data;
  struct node *link;
}node;
 
node* head = NULL;
 
void add_at_pos_n(int x, int n)
{
	int i,count=1;
	node *new= (node*) malloc(sizeof(node));
	new->data=x;
	new->link=NULL;
	if(n==1)
	{
			
			new->link=head;
			head=new;
		    return;
	}
	node * temp= head;
	node * temp1= head;
	while(temp1!=NULL)
	{
		temp1=temp->link;
		count++;
	}
	if(n>++count)
	{
	printf("as nodes are %d, you can't enter at %d",count,n);
	return;
	}
	else
	{
	for(i=0;i<n-2;i++)
	{
		temp=temp->link;
	}
		new->link=temp->link;
		temp->link=new;
	}
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
  int x,n,a;
        printf(" Do you want to enter a node choose '1' for yes else '0' \n");
     	scanf("%d",&a);	
     	while(a==1)
     	{
	 	printf("enter the position (must be greater than 0)  \n");
     	scanf("%d",&n);	
 		printf("\nenter the value for nodes   ");
 		scanf("%d",&x);
 		add_at_pos_n(x,n);
        show();
        printf(" \n Do you want to enter a node choose '1' for yes else '0' \n");
     	scanf("%d",&a);	
         }
  return 1;
}
