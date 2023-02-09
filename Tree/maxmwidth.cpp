#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
};

Node*newnode(int newdata){
    Node*root=new Node();
    root->data=newdata;
    root->left=NULL;
    root->right=NULL;
    return root;
}


int width(Node*root){
    if(root==NULL){
        return 0;
    }
    int res=0;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        res=max(res,n);
        Node*temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return res;
}

 int main(){
     Node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->right = newnode(8);
	root->right->right->left = newnode(6);
	root->right->right->right = newnode(7);


cout<<width(root);
    return 0;
 }