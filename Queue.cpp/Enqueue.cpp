#include<bits/stdc++.h>
using namespace std;
#define size 5
int A[size];
int front=-1;
int rear=-1;

void Enqueue(int data)
{
     if(rear==size-1)
    {
        cout<<"Overflow"<<" ";
        exit(1);
    }
    

  else if(front==-1 && rear==-1)
    {
        front =rear=0;
        A[rear]=data;
    }
    else{
        rear++;
        A[rear]=data;
    }
}


void display()
{
    int i;
if(front==-1 && rear==-1)
    {
        cout<<"Underflow";
    }
    else {
        for(i=front; i<rear+1; i++)
        {
            cout<<A[i]<<"-->";
        }
    }
}

int main()
{
   
  
   Enqueue(10);
   Enqueue(20);
   Enqueue(30);
   Enqueue(40);
   Enqueue(60);

   

    display();
}