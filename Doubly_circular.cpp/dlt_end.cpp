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
        tail=new_node;
    }
    else
    {
         tail->next=new_node;
        new_node->next=head;
        new_node->prev=tail;
        head->prev=new_node;
        tail=new_node;
    }
}

void deletfromend()
{
    Node*temp=head;
    if(tail==0)
    {
        cout<<"List is empty.";
    }
    else if(temp==tail)
    {
       free(tail);
    }
    else 
    {
        while (temp->next!=tail)
        {
            temp=temp->next;
        }

        temp->next=tail->next;
        tail->next->prev=temp;
        free(tail);
        tail=temp;
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
    insert(20);
    insert(40);
    insert(60);
    insert(80);
    insert(100);
    print();
    deletfromend();
    cout<<'\n'<<"After deletion from end:"<<endl;
    print();
}