#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
void printnode(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
    Node*curr=q.front();
    q.pop();
    cout<<curr->data<<" ";
    if(curr->left!=NULL){
        q.push(curr->left);
    }
    if(curr->right!=NULL){
        q.push(curr->right);
    }
    }

}

Node*newnode(int newdata){
    Node*temp=new Node();
    temp->data=newdata;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


int main(){
    Node*root=newnode(10);
    root->left=newnode(20);
    root->right=newnode(30);
    root->left->left=newnode(40);
    root->left->right=newnode(50);
    root->right->left=newnode(60);
	root->right->right=newnode(70);
	
    printnode(root);
    return 0;
}
