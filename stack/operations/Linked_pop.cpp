#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*link;
};
Node*top=0;
void push(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->link=top;
    top=new_node;
}

void pop()
{
    Node*temp;
    temp=top;
    if(top==0)
    {
        cout<<"stack is empty.";
    }
    top=top->link;
    free(temp);

}
void peek()
{
    cout<<top->data;
}

void print()
{
    Node*temp=top;
    while(temp !=0)
    {
        cout<<temp->data<<"-->";
        temp=temp->link;
    }
}
int main()
{
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    print();
    cout<<'\n'<<"Top Element is:";
    peek();
    cout<<'\n'<<"popped Element is:"<<top->data<<endl;
    pop();
    print();
    cout<<'\n'<<" Now Top element is:";
    peek();
}