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

void kthnode(Node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    kthnode(root->left,k-1);
    kthnode(root->right,k-1);
}

int main()
{ Node*root=newnode(10);
 root->left=newnode(20);
    root->right=newnode(30);
    root->left->left = newnode(40);
	root->left->right = newnode(50);
	 root->right->left=newnode(80);
     kthnode(root,2);
    return 0;
}