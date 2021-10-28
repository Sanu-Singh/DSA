#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*tail;
void insert(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=NULL;
    if(tail==NULL)
    {
        tail=new_node;
        tail->next=new_node;
    }
    else{
        new_node->next=tail->next;
        tail->next=new_node;
        tail=new_node;
    }
}

void dltfromfront()
{
    Node*temp=tail->next;
    if(tail==0)
    {
        cout<<"List is Empty.";
    }
    if(tail->next==tail)
    {
        free(tail);
        tail=0;
    }
    else{
        tail->next=temp->next;
        free(temp);
        
    }
}

void print()
{
    Node*ptr=tail->next;
    while (ptr->next!=tail->next)
   
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
    print();
    dltfromfront();
    cout<<'\n'<<"After deletion from frot:"<<endl;
    print();

}