#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*front=0;
Node*rear=0;
void enqueue(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=NULL;
    if(front==0 && rear==0)
    {
        front=rear=new_node;
        rear->next=front;
    }
    else{
        new_node->next=rear->next;
        rear->next=new_node;
        rear=new_node;
    }
}

void dequeue()
{ Node*temp=front;
    if(front==0 && rear==0)
    {
        cout<<"Queue is Empty.";
    }
    if(front==rear)
    {
        free(front);
    }
    else{
        front=front->next;
        rear->next=front;
        free(temp);
    }

}

void peek()
{
     if(front==0 && rear==0)
    {
        cout<<"Queue is Empty!.";
    }
    else{
        cout<<front->data;
    }
}

void print()
{
    Node*temp=front;
 if(front==0 && rear==0)
    {
        cout<<"Queue is Empty!.";
    }
    while(temp->next!=front)
 {  
      cout<<temp->data<<"-->";
      temp=temp->next;
}
    cout<<temp->data<<"-->";
}




int main()
{
    enqueue(20);
    enqueue(40);
    enqueue(70);
    enqueue(60);
    enqueue(80);
    print();
    cout<<'\n'<<"Top Element is:"<<front->data;
    cout<<'\n'<<"After deletion :"<<endl;
    dequeue();
    print();
    cout<<'\n'<<"Top Element is:";
    peek();
    

}