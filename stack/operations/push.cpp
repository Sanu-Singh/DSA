#include<bits/stdc++.h>
using namespace std;
#define size 5
int A[size];
int top=-1;

void push(int data)
{
    if(top==size-1)
    {
        cout<<"stack Overflow";
        exit(1);
    }
    else{
           top++;
           A[top]=data;
}
}

void print()
{ 
    
    for(int i=0; i<=top; i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    push(21);
    push(27);
    push(20);
    push(27);
    push(28);
    
    print();
}