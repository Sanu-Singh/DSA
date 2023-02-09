#include<bits/stdc++.h>
using namespace std;
#define size 5
int A[size];
int top=-1;
void push(int data)
{
    if(top==size-1)
    {
        cout<<"Stack Overflow !";
    }
    else{
        top++;
        A[top]=data;
    }
} 

void pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow";
    }
    else{
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        cout<<"Stack underflow";
    }
    cout<<A[top];
}

void print()
{ int i;
    for(i=top; i>=0; i--)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int choice, data;
    while(1)
    {
        cout<<"\n1.Push \n2.Pop \n3.Peek \n4.Print All \n5.Exit \n";
        cout<<"Etnter your Choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
         cout<<"Enter the value: "<<endl;
               cin>>data;
               push(data);
               cout<<data<<"is Pushed."<<endl;
            break;
        case 2:
        cout<<"Popped Element is:"<<data<<endl;
        pop();
        break;
        case 3:
        cout<<"Topmost Element is:"<<A[top]<<endl;
        break;

        case 4:
        cout<<"Elements in Stack are: "<<endl;
        print();
        break;

        case 5:
          exit(1);

        default:
        cout<<"Wrog Choice!";
            break;
        }
    }
}