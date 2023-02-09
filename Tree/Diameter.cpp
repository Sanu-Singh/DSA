#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};
int res=0;
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int lfh=height(root->left);
    int rfh=height(root->right);
res=max(res,1+lfh+rfh);
    return 1+max(lfh,rfh);
}

int diameter(Node*root){
int data=height(root);
return res;
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
    cout<< diameter(root);
    return 0;

}