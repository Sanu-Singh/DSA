//find the lenght of linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node*next;
};
Node*head;
void insert(int newdata){
	Node*new_node=new Node;
    new_node->data=newdata;
	new_node->next=head;
	head=new_node;
}

int getCount(Node*head){
	int count=0;
	Node*current=head;
	while (current !=NULL)
	{
		count ++;
		current=current->next;
	}
	return count;
}
 void print()
 {
	 Node*ptr=head;
	 while(ptr !=NULL)
	 {
		 cout<<ptr->data;
		 ptr=ptr->next;
		 if(ptr !=NULL)
		 cout<<"-->";
		 
	 }

 }

	 int  main()
{
	insert(2);
	insert(4);
	insert(6);	
	insert(8);
	insert(10);
	insert(12);
    print();
						
cout<<'\n'<<"Count of node is :"<<getCount(head);
return 0;
}
 









/*#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head;
void insert(int newdata)
{

struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=newdata;
newnode->next=head;
head=newnode;
}
int getCount(struct Node*head)
{
		int count=0;
	struct Node*current=head;

	while(current !=NULL)
	{
		count++;
		current=current->next;
		
	}
	return count;
	}
	
void print(struct Node*ptr)
{
	printf("inserted Linked-list:\n");
	while(ptr !=NULL)
	{
	printf("%d",ptr->data);
	ptr= ptr->next;
	if(ptr!=NULL)
	printf("-->");
	}
	
}

int  main()
{
	insert(2);
	insert(4);
	insert(6);	
	insert(8);
	insert(10);
	insert(12);
    print(head);
						
printf("\n Count of node is %d:",getCount(head));
return 0;
}
*/