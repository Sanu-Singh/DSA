// insertion node at given node

#include<stdio.h>
#include<stdlib.h>

struct node{
      int data;
	  struct node*next;	
};
struct node*head;

void insert(int new_data)
{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
	printf("Inserted Element : %d\n", new_data);

}

void insertAfter(struct node*prevnode, int new_data)
{
	if(prevnode==NULL)
	{
		printf("Error: Invalid node pointer !!!\n");
		return ;
	}
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=prevnode->next;
	prevnode->next=new_node;
}

void printlinkedlist(struct node*ptr)
{
	printf("Linked List: \n");
	while(ptr !=NULL)
	{
		printf("%d", ptr->data);
		ptr=ptr->next;
		if(ptr !=NULL)
		printf("-->");
	}
}
int main()
{   // initialize();
    /* Creating a linked List*/
    insert(2);  
    insert(4); 
    insert(5); 
    insert(9);
    printlinkedlist(head);
    /* Inserting a node after third node(4) from head */
    insertAfter(head->next->next, 8);
    printf("\n\nAfter Insertion\n");
    printlinkedlist(head);
    return 0;
}
