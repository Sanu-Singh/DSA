#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};

Node*front=0;
Node*rear=0;
//in queue insertion takes place fron end;
void enque(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=NULL;
    if(front==0 && rear==0)
    {
        front=rear=new_node;
    }
    else{
        rear->next=new_node;
        rear=new_node;
    }   
}

void print()
{
    Node*temp=front;
       if(front==0 && rear==0)
    {
        cout<<"Queue is Empty";
    }
  while(temp !=NULL)
  {
      cout<<temp->data;
      temp=temp->next;
      if(temp!=NULL)
      cout<<"-->";
  }   
}

int main()
{

    enque(20);
    enque(40);
    enque(60);
    enque(80);
    print();
return 0;
}