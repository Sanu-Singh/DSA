#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};

Node*head;
void insert(int newdata)
{
    Node*new_node=new Node();
    new_node->data=newdata;
    new_node->next=head;
    head=new_node;
}

void dltfromend()
{
    if(head==NULL)
    {
        cout<<"List is Empty.";
    }
    
    else{
        if(head->next==NULL)
        {
            free(head);
            head=NULL;
        }
        
        else{
            Node*temp=head;
            Node*prevNode=head;
            while(temp->next !=NULL)
            {
                prevNode=temp;
                temp=temp->next;
            }
            prevNode->next=NULL;
            free(temp);
            temp=NULL;
        }
    }
}

void print()
{
    Node*ptr=head;
    while(ptr !=NULL)
    {
    cout<<ptr->data;
    ptr=ptr->next;
    if(ptr !=NULL)
    cout<<"-->";
    }
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print();
    dltfromend();
    cout<<'\n'<<"After deletion from end:"<<endl;
    print();
    return 0;
}