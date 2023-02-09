#include<bits/stdc++.h>
using namespace std;
#define size 5
int A[size];
int front=-1;
int rear=-1;
void enqueue( int newdata)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        A[rear]=newdata;
    }

    else if(((rear+1)%size)==front)
    {
        cout<<"Queue is Empty!.";
    }

    else {
        rear=((rear+1)%size);
        A[rear]=newdata;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is Empty!";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
       // cout<<A[front];
        front=((front+1)%size);
    } 
}

void print()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is Empty!";
    }
    else{
        cout<<"Queue is :";
        while(i !=rear)
      {  cout<<A[i]<<"-->";
        (i=(i+1)%size);
    }
    cout<<A[i]<<"-->";
    }
}
int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
print();
cout<<'\n'<<"After deletion:"<<endl;
dequeue();
    print();
}