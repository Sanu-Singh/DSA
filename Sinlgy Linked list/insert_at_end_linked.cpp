#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
};
Node*head;
void Insert(int num){
    Node*new_node=new Node;
    new_node->data=num;
    new_node->next=head;
    head=new_node;
}

void InsertAtEnd(Node*head,int num)
{
    Node*new_node=new Node;
     new_node->data=num;
        new_node->next=NULL;
    while (head->next !=NULL)
    {
       head=head->next;
    }
    head->next=new_node;

}
    
void printlist()
{
    Node*ptr=head;
    while (ptr !=NULL)
    
    {
       cout<<ptr->data;
       ptr=ptr->next;
       if(ptr!=NULL)
    cout<<"-->";
    }
    
}

int main()
{
    head=NULL;
     Insert(2);
      Insert(4);
       Insert(6);
        Insert(8);
         Insert(10);
         printlist();
         InsertAtEnd(head,12);
         cout<<'\n'<<"After Insertion At End:"<<endl;
         printlist();
         return 0;
        

}


































/* #include <stdio.h>
#include <stdlib.h>
  
/* A structure of linked list node */
/*struct node {
  int data;
  struct node *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
/* 
Inserts a node in front of a singly linked list. 
*/
/*void insertAtFront(int num) {
    /* Create a new Linked List node */
  /*  struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    /* Next pointer of new node will point to head node of linked list  */
    //newNode->next = head;
    /* make new node as new head of linked list */
    /*head = newNode;
    printf("Inserted Element : %d\n", num);
}
 
/*
Inserts a node after last node of linked list 
*/
/*void insertAtEnd(struct node* head, int num){
    /* Input validation */
  /*  if (head == NULL) { 
       printf("Error : Invalid node pointer !!!\n");       
       return;  
    }
    /* creates a new node */
    /*struct node* newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    newNode->next = NULL;
    /* Traverse from head to last node  */
    /*while(head->next != NULL)
       head = head->next;
     
    /* Insert newNode after Tail node */
    /*head->next = newNode;
}
/* 

Prints a linked list from head node till tail node 
*/
/*void printLinkedList(struct node *nodePtr) {
    printf("\nLinked List\n");
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}
  
int main() {
    initialize();
    /* Creating a linked List*/
  /*  insertAtFront(2);  
    insertAtFront(4); 
    insertAtFront(5); 
    insertAtFront(9);
    printLinkedList(head);
    /* Inserting a node after tail node of Linked List */
    /*insertAtEnd(head, 10);
    /*printf("\n\nAfter Insertion At End\n");
    /*printLinkedList(head);
    return 0;
}
*/