// c++ program of linked lsit:
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node*next;
};
Node*head;
void insert(int newdata)
{
	Node*newNode=new Node();
	newNode->data=newdata;
	newNode->next=head;
	head=newNode;
}
void printlist()
{    Node*ptr=head;

	while (ptr!= NULL)
	{
		cout<<ptr->data<<"-->";
       ptr=ptr->next; 	
	}
}

int main()
{ 
	head=NULL;
	insert(2);
	insert(4);
	insert(26);
	insert(28);
	insert(20);
	insert(24);
	printlist();

}













































/*#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node*next;
};

void printList(struct Node *ptr)
{
	while(ptr !=NULL){
	cout<<"Elements:"<<ptr->data<<endl;
	//printf("Element: %d\n", ptr->data);
	ptr=ptr->next;}
}
int main()
{
	struct Node*Head;
	struct Node*Second;
	struct Node*Third;
	struct Node*Fourth;
	
	Head=(struct Node*)malloc(sizeof(struct Node));
	Second=(struct Node*)malloc(sizeof(struct Node));
	Third=(struct Node*)malloc(sizeof(struct Node));
	Fourth=(struct Node*)malloc(sizeof(struct Node));
	
	
	
	Head->data=8;
	Head->next=Second;	
	
	Second->data=10;
	Second->next=Third;	
	
	Third->data=15;
	Third->next=Fourth;	
	
	Fourth->data=25;
	Fourth->next=NULL;	
	
	printList(Head);
}
*/
