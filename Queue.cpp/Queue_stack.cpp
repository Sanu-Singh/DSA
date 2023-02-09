#include<bits/stdc++.h>
using namespace std;
#define N 5
int S1[5], S2[5];
int top1=-1;
int top2=-1;
int count =0;

void push1(int data)
{
    if(top1==N-1)
    {
        cout<<"Stack Overflow!";
    }
    else 
    {
        top1++;
        S1[top1]=data;
    }
}

void pop1()
{
    int a;
    if(top1==-1)
    {
        cout<<"Stack is Full!";
    }
    else
    {
        a=S1[top1];
        top1--;
    }
    
}

void push2(int newdata)
{
  if(top2==N-1)
  {
      cout<<"Stack Overflow>";
  }
  else
  {
      top2++;
      S2[top2]=newdata;
  }
}

void pop2()
{   int b;
    if(top2==-1)
    {
        cout<<"stack is Full.";
    }
    else{ 
        b=S2[top2];
        top2--;
    }
}

void enqueue(int X)
{
    push1(X);
    count++;
}

void dequeue()
{ int a,b;
    if(top1==-1 && top2==-1)
    {
        cout<<"Queue is Empty.";
    }

    else{
        for(int i=0; i<count; i++)
        {
            a=pop1();
            push2(a);
        }

        b=pop2();
        cout<<"Dequed Element is: "<<c;
        count--;
        for(int i=0;i<count; i++)
        {
             a=pop2();
             push1(a);
        }
    }
}

void print()
{
    int i;
    for(i=0; i<=top1; i++)
    {
      cout<<S1[i]<<" ";
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(40);
    dequeue();
    print();
}