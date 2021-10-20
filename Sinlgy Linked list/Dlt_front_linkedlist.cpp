#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*head;
void insert(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=head;
    head=new_node;
}

void Dltfront()
{ 
    if(head==NULL)
    {
        cout<<"List is empty.";
    }
    else{
     Node*temp=head;
    head=head->next;
     free(temp);
    }
    return ;
}

void print()
{
    Node*ptr=head;
    while(ptr !=NULL)
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
    Dltfront();
    cout<<'\n'<<"After deletion from front:"<<endl;
    print();
    return 0;
}