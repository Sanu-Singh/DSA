// implementation of stack using linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*top=0;
void push(int newdata){
Node*newnode=new Node();
newnode->data=newdata;
newnode->next=top;
top=newnode;
}
void pop(){
    Node*temp=top;
    if(top==0){
        cout<<"Already empty";
    }else{
      top=top->next;
      free(temp);
    }
    
}
void print(){
    Node*temp=top;
    if(top==0){
        cout<<"Empty!";
    }
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    print();
    cout<<"After pop:" <<endl;
    pop();
    print();
    return 0;

}