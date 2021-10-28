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
void dltfromend()
{
    Node*temp=tail->next;
    if(tail==0)
    {
        cout<<"List is empty.";
    }
    if(tail->next==tail)
    {
        free(tail);
        tail=0;
    }
    else{
       while(temp->next!=tail)
       {
           temp=temp->next;
       }
        temp->next=tail->next;
        free(tail);
        tail=temp;
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
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    print();
   dltfromend();
   cout<<'\n'<<"After deletion from end."<<endl;
   print();

}