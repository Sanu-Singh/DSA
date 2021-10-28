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

void Insertatend(int newdata)
{
    Node*new_node=new Node();
    Node*lastnode=head;
    new_node->data=newdata;
    new_node->next=NULL;
    
    if(head ==NULL)
    {
        new_node->prev=NULL;
    head=new_node;
        return ;
    }
    while(lastnode->next !=NULL)
    
        lastnode=lastnode->next;
        lastnode->next=new_node;
    
        new_node->prev=lastnode;
        return ;
    
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
    
    Insertatend(44);
     Insertatend(55);
      cout<< '\n'<<"Inserted at End:"<<endl;
    display();
    
    return 0;
    
}
