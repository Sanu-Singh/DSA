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
   new_node->next=0;
   if(tail==0)
   {
       tail=new_node;
       tail->next=new_node;
   }
   else
   {
       new_node->next=tail->next;
       tail->next=new_node;
      // tail=new_node;
   }
}
void insertatfront(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
   new_node->next=0;
   if(tail==0)
   {
       tail=new_node;
       tail->next=new_node;
   }
   else
   {
       new_node->next=tail->next;
       tail->next=new_node;
     tail=new_node;
   }
}
void insertatend(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
   new_node->next=0;
   if(tail==0)
   {
       tail=new_node;
       tail->next=new_node;
   }
   else
   {
       new_node->next=tail->next;
       tail->next=new_node;
    tail=new_node;
   }
}
 void print()
{Node*temp=tail->next;
      while(temp->next!=tail->next)
      {cout<<temp->data;
      temp=temp->next;
      if(temp->next!=tail->next)
      cout<<"-->";
}
cout<<"-->";
cout<<temp->data;
      }
      /* // Node*ptr=tail;
    Node*temp=tail->next;
    do{
        cout<<temp->data;
        temp=temp->next;
        if(temp!=tail->next)
        cout<<"-->";
    }while(temp!=tail->next);
    */



int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    print();
  insertatfront(150);
  // insertatend(500);
   cout<<'\n'<<"After inserton at front:"<<endl;
    print();
    // cout<<'\n'<<"After inserton at end:"<<endl;
   // print();
}