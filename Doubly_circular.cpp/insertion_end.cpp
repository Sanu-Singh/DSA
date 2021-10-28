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
    else
    {
        tail->next=new_node;
        new_node->prev=tail;
        new_node->next=head;
        head->prev=new_node;
        tail=new_node;
    }
}

void insertatend(int newdata)
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
        new_node->next=head;
        new_node->prev=tail;
        tail->next=new_node;
        head->prev=new_node;
        tail=new_node;        
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
    insert(50);
    insert(100);
    insert(150);
    insert(200);
    print();
    insertatend(800);
    cout<<'\n'<<"After insertion at end:"<<endl;
    print();
}