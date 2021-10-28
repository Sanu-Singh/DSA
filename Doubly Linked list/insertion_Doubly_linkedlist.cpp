#include<bits/stdc++.h>
using  namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;
};
Node*head;
void insert(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=(head);
    new_node->prev=NULL;
    if((head) !=NULL)
    {
        (head)->prev=new_node;
        
    }
    (head)=new_node;
}

void Insertatfront(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=(head);
    new_node->prev=NULL;
    if(head !=NULL)
    {
        (head)->prev=new_node;
        
    }
    head=new_node;
}
    
void display()
{
    Node*ptr=head;
    while(ptr !=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
    if(ptr!=NULL)
    cout<<"-->";
    }
}

int main()
{
    insert(4);
    insert(8);
    insert(10);
    insert(12);
    display();
     Insertatfront(122);
     Insertatfront(120);
     Insertatfront(1000);
      cout<< '\n'<<"Inserted at front:"<<endl;
    display();
    
    return 0;
    
}
