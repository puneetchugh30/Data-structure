#include<stdio.h>
#include<stdlib.h>
 

typedef struct node
{
    int data;
    struct node* link;
}node;
node* head;
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
 
int detectloop()
{
    node  *slow_p = head, *fast_p = head;
  
    while (slow_p && fast_p && fast_p->link )
    {
        slow_p = slow_p->link;
        fast_p  = fast_p->link->link;
        if (slow_p == fast_p)
        {
           printf("\nFound Loop");
           return 1;
        }
    }
    return 0;
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

    head = NULL;
    int i,n,x;
 	printf("enter how many nodes you want (recommended more than 2)  \n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{	
 		printf("\nenter the values for nodes   ");
 		scanf("%d",&x);
 		add_at_end(x);
        show();
	 }
 
    /* Create a loop for testing */
    node* temp1=head;
    while(temp1->link!=NULL)
    {
    	temp1=temp1->link;
	}
    temp1->link=head->link->link;  // change if you dont want to enter more than 2 nodes (temp->link=head)
    printf("\nLoop created");
    detectloop();
 
    return 0;
}
