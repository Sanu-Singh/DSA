#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*head;
Node*temp=head;
void insert(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=temp=new_node;
    }
    else{
    temp->next=new_node;
    temp=new_node;

  }
  temp->next=head;
}

void print()
{
    Node*ptr=head;
    while(ptr->next !=head)
   { cout<<ptr->data<<"-->";
    ptr=ptr->next;

  }
  cout<<ptr->data;
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print();
    return 0;
}