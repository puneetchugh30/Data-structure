#include<stdio.h>
#include<stdlib.h>

typedef struct mylist
{
	int data;
	struct mylist *link;   // or   (mylist *link;)
} node;
 node * head;              // to give head to create & show functions
void create(int x)        // creation of nodes at beginning & assign the values
{  
	node* temp = (node*)malloc(sizeof(node));
	temp->data = x;
	temp->link = head;
	head = temp;
	
}

void show()
{
	node *temp = head;
	printf("now list is : ");
	while(temp!=NULL)
	{
		printf("\t%d",temp->data);
		temp=temp->link;
	}
	printf("\n");
	
}
 
int main() {
    int n,i,x;
 	node * head=NULL;
 	printf("enter how many nodes you want  \n");
 	scanf("%d",&n);
 	//create n number of nodes
 	for(i=0;i<n;i++)
 	{	
 		printf("enter the values for nodes  \n ");
 		scanf("%d",&x);
 		create(x);
 		show();
	 }
 	
 	return 0;
 	getch();
 	
 }
