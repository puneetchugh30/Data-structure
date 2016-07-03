#include <stdio.h>
#include <stdlib.h>
 
typedef struct mylist
{
  int data;
  struct mylist *link;
}node;
 
	node* head = NULL;
 
 void reverselist(node* temp1)
 {
 	if(temp1->link==NULL)
 	{
 		head=temp1;
 		return;
	 }
	 reverselist(temp1->link);
	 node *temp2=temp1->link;
	 temp2->link=temp1;
	 temp1->link=NULL;
	 
 }
 
 
void add_at_end(int x)
{
	  node *temp = head;
      node* new1 = (node*) malloc(sizeof(node));
     new1->data  = x;
     new1->link = NULL;
    if (head == NULL)
    {
       head = new1;
       return;
    }
    while (temp->link != NULL)
    {
    	temp = temp->link;
	}
    temp->link = new1;
    
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
	 printf("\nNOW LINKED LIST IS REVERSED     ");
	 
	 node* temp1=head;
     reverselist(temp1);
     show();
  return 1;
}
