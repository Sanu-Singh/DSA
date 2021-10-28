#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
};
Node*head;
Node*tail;
void insert(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    if(tail==0)
    {
        head=tail=new_node;
        head->next=new_node;
        head->prev=new_node;
    }
    else{
        tail->next=new_node;
        new_node->next=head;
        new_node->prev=tail;
        head->prev=new_node;
        tail=new_node;
    }
}

void deletfromfront()
{
    Node*temp=head;
    if(tail==0)
    {
        cout<<"List is Empty.";
    }
    else if(temp==tail)
    {
        free(tail);
        tail=NULL;
    }
    else
    {
        tail->next=temp->next;
        temp->next->prev=tail;
        free(temp);
        
    }
}

void print()
{
    Node*ptr=tail->next;
    while(ptr->next!=tail->next)
    {
        cout<<ptr->data<<"-->";
        ptr=ptr->next;
    }
    cout<<ptr->data;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    print();
    deletfromfront();
    cout<<'\n'<<"After deletion from front."<<endl;
    print();
}