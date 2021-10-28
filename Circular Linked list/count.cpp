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
    new_node->next=NULL;
    if(tail==0)
    {
        tail=new_node;
        tail->next=new_node;
    }
    else{
        new_node->next=tail->next;
        tail->next=new_node;
        tail=new_node;
    }
}

int getcount()
{
    Node*temp=tail->next;
    int count=0;
    while(temp!=tail)
    {
        temp=temp->next;
        count++;
    }
     count++;
     return count;
}

void print()
{
    Node*ptr=tail->next;
    while(ptr->next!=tail->next)
    {cout<<ptr->data<<"-->";
     ptr=ptr->next;
    }
    cout<<ptr->data;
}

int main()
{
 insert(2);
 insert(80);
 insert(70);
 insert(50);
 insert(40);
 insert(20);
 print();
 cout<<'\n'<<"Total No of Nodes:"<<getcount();

}