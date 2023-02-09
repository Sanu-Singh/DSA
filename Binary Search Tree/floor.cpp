//nearest smallest
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

Node*floordata(Node*root,int k){
    Node*res=NULL;
    while(root!=NULL){
        if(root->data==k){
            return root;
        }else if(root->data > k){
            root=root->left;
        }else{
            
                res=root;
            root=root->right;
            
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

cout<<"floor of Binary Search Tree: "<<endl;

cout<<(floordata(root,k)->data);
return 0;
}