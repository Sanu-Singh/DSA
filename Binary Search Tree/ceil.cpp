//nearest greater

#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node*left;
  Node*right;
};

Node* create(int newdata){
    Node*newnode=new Node;
    newnode->data=newdata;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

Node*ceildata(Node*root,int k){
    Node*res=NULL;
    while(root!=NULL){
        if(root->data==k){
            return root;
        }else if(root->data < k){
            root=root->right;
        }else{
            
                res=root;
            root=root->left;
            
        }
    }
    return res;
}
int main(){
Node *root=create(15);
	root->left=create(5);
	root->left->left=create(3);
	root->right=create(20);
	root->right->left=create(18);
	root->right->left->left=create(16);
	root->right->right=create(80);
	int k=17;

cout<<"ceil of Binary Search Tree: "<<endl;

cout<<(ceildata(root,k)->data);
return 0;
}