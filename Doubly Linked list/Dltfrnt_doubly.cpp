#include<bits/stdc++.h>
using namespace std;
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
    new_node->next=head;
    new_node->prev=NULL;

    if(head !=NULL)
    {
        head->prev=new_node;
    }
    head=new_node;
}

void dltfromfront()
{
    Node*temp=head;
    if(head==NULL)
    {
        cout<<"List is already Empty.";
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
void print()
{
    Node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
        if(ptr !=NULL)
        cout<<"-->";
    }
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print();
    dltfromfront();
    cout<<'\n'<<"After deletion from front:"<<endl;
    print();
}