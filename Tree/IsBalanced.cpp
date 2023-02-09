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

// int height(Node*root){
//     if(root==NULL){
//         return 0;
//     }
//     int lfh=height(root->left);
//     int rfh=height(root->right);
//     return 1+max(lfh,rfh);
// }
// bool isbalanced(Node*root){
//     if(root==NULL){
//         return 1;
//     }
//     int lfh=height(root->left);
//     int rfh=height(root->right);
//     if(abs(lfh-rfh)<=1 && isbalanced(root->left) && isbalanced(root->right)){
//         return 1;
//     }
//     return 0;
// }

// Efficient Approach --

bool isbalanced(Node*root){
    if(root==NULL){
        return 1;
    }
    int lfh=isbalanced(root->left);
    if(lfh==-1){
        return -1;
    }
    int rfh=isbalanced(root->right);
    if(rfh==-1){
        return -1;
    }
    if(abs(lfh-rfh)>1){
        return -1;
    }else{
        return max(lfh,rfh)+1;
    }
    
    
}

 int main(){
     Node*root=newnode(10);
 root->left=newnode(20);
    root->right=newnode(30);
    root->left->left = newnode(40);
	root->left->right = newnode(50);
	 root->right->left=newnode(80);


if(isbalanced(root)){
    cout<<"Balanced";
}else{
    cout<<"Not Balanced!";
}
    return 0;
 }