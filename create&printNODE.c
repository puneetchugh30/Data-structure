#include<stdio.h>
#include<stdlib.h>

typedef struct mylist
{
	int data;
	struct mylist *link;   // or   (mylist *link;)
} node;

// This function prints contents of linked list starting from 
// the given node

void printlist(node *n)
{
  while (n != NULL)
  {
     printf("\nData of node is %d ", n->data);
     n = n->link;
  }
}
 // create three nodes
 
int main() {
 
 	node * head=NULL;
 	node * second=NULL;
 	node * third=NULL;
 	// allocate memory to these nodes in heap
 	 head = (node*) malloc(sizeof(node));
 	    if (head==NULL)
 	 	{
	  		return 1;   // no memory to allocate
	  	}
	 second = (node*) malloc(sizeof(node));
 	 	if (second==NULL)
 	 	{
	  		return 1;   // no memory to allocate
	  	}
     third = (node*) malloc(sizeof(node));
 	 	if (third==NULL)
 	 	{
	  		return 1;   // no memory to allocate
	  	}   
		  
		  head->link=second;	 // Link first node with the second node
		  
		  second->data = 20; //assign data to second node
  		  second->link = third; // Link second node with the third node
  		  
  		  third->data = 30; //assign data to third node
          third->link = NULL;
 	//printf(" %d", head->data);
 	printlist(head->link);
 	return 0;
 	getch();
 	
 }
