#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
};
Node*head;
void insert(int newdata){
    Node*new_node=new Node;
    new_node->data=newdata;
    new_node->next=head;
    head=new_node;
    
}

void print(){
    Node*ptr=head;
    while(ptr !=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
        if(ptr !=NULL)
        cout<<"-->";
    }
}

int main(){
    head=NULL;
	insert(2);
	insert(4);
	insert(26);
	insert(28);
	insert(20);
	insert(24);
    cout<<"Inserted Elements:"<<endl;
    print();
    
    return 0;}