#include <stdio.h>
#include <stdlib.h>
 
typedef struct mylist
{
  int data;
  struct node *link;
}node;
 
node* head = NULL;

void forward(struct node* z)
{
	
	if(z==NULL)
	return;
	
	forward(z->link);
	printf(" %d ", z->data);
}
 
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
 	printf("enter how many nodes you want  \n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{	
 		printf("\nenter the values for nodes   ");
 		scanf("%d",&x);
 		add_at_end(x);
 
        show();
	 }
	 node* z=head;
	 forward(z);
 
  return 1;
}
