#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
 Node*front=0;
 Node*rear=0;
 //In Queue insertion from end
 void enque(int newdata)
 {
     Node*new_node=new Node();
     new_node->data=newdata;
     new_node->next=NULL;

     if(front==0 && rear==0)
     {
         front=rear=new_node;
     }
     else
     {
         rear->next=new_node;
         rear=new_node;
     }
 }
// in Queue deletion is take from front side.
Node*temp=front;
 void dequeue()
 {
     if(front==0 && rear==0)
     {
         cout<<"Queue is Empty.";
     }
     else
     {  cout<<front->data<<" ";
         front=front->next;
         free(temp);
     }
     
 }

void print()
{
    Node*temp=front;
    if(front==0 && rear==0)
     {
         cout<<"Queue is Empty.";
     }

     while (temp!=NULL)     
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
    enque(100);
    print();
  
     cout<<'\n'<<"Deleted Data: ";
     dequeue();
     dequeue();
    cout<<'\n'<<"After deletion: "<<endl;
    print();
 return 0;
}