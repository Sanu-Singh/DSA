//insertion at front;
#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
	
	
};
struct node*head;

void insertATfront(int new_data){
	struct node*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
	printf("Inserted Elements: %d\n" ,new_data);
	
}

void printlinkedlist(struct node*ptr)
{
	printf("Linked list \n");
	while(ptr!=NULL){
		printf("%d" ,ptr->data);
		ptr=ptr->next;
		if(ptr!=NULL)
		printf("-->");
	}
}

int main()
{
	insertATfront(2);
	insertATfront(4);
	insertATfront(6);
	insertATfront(8);
	printlinkedlist(head);
	return 0;
	
}
