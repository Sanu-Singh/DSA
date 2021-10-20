//reverse of linked lsit:
#include<bits/stdc++.h>
using namespace std;
 class Node{
     public:
     int data;
     Node*next;
 };

 void reverse(Node**head){
     Node*prevNode=NULL;
     Node*currentNode=*head;
     Node*nextNode=NULL;
     while(currentNode!=NULL)
     {
         nextNode=currentNode->next;
         currentNode->next=prevNode;
         prevNode=currentNode;
         currentNode=nextNode;
     }
     *head=prevNode;
 }
 Node*head;
void insert( int newdata)
{
    Node*newnode=new Node;
    newnode->data =newdata;
    newnode->next=(head);
    (head)=newnode;
}
 
void print()

{ Node*ptr=head;
    
    
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
        if(ptr!=NULL)
	    printf("-->");

    }
}

int main(){
    
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    cout<<"Given Linked-list: "<<'\n';
    print();
    reverse(&head);
    cout<<'\n'<<"Reversed Linked list"<<'\n';
    print();
    
    return 0;
}











/*#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;

};

void Reverse(struct Node**head)
{
    struct Node*prevNode=NULL;
    struct Node*nextNode=*head;
    struct Node*currentNode=*head;
    
while(nextNode !=NULL)
    {
    nextNode = nextNode->next;
    currentNode->next = prevNode;
    prevNode = currentNode;
    currentNode = nextNode;
}
*head=prevNode;

}

void insert( struct Node**head,int newdata)
{
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data =newdata;
    newnode->next=(*head);
    (*head)=newnode;
}
struct Node*head;
void print(struct Node*ptr)
{
    
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
        if(ptr!=NULL)
	    printf("-->");

    }
}

int main(){
    insert(&head,2);
    insert(&head,4);
    insert(&head,6);
    insert(&head,8);
    printf("Given Linked-list: \n");
    print(head);
    Reverse(&head);
    printf("\nReversed Linked list \n");
    print(head);
    getchar();
    return 0;
}*/