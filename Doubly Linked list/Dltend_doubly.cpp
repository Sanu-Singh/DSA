#include<bits/stdc++.h>
using namespace std;
class  Node{
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

    if(head!=NULL)
    {
        head->prev=new_node;
    }
    head=new_node;
}

void dltfromend()
{
    Node*temp=head;
    Node*temp2;
    while(temp->next!=NULL)

    temp=temp->next;
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
    return;
 
}
void print()
{
    Node*ptr=head;
    while(ptr!=NULL){

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
    insert(10);
    print();
    dltfromend();
    cout<<'\n'<<"After deletion from end:"<<endl;
    print();
}