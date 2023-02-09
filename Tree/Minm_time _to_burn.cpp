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
int res=0;
int burntree(Node*root, int target, int &dist){
    if(root==NULL){
        return 0;
    }
    if(root->data==target){
      dist=0;
      return 1;
    }
    int ldist=-1,rdist=-1;
    int lfh=burntree(root->left, target, ldist);
    int rfh=burntree(root->left,target,rdist);
    if(ldist!=-1){
        dist=ldist+1;
        res=max(res,rfh+dist);
    }
 if(rdist!=-1){
        dist=rdist+1;
        res=max(res,lfh+dist);
    }
    return max(lfh,rfh)+1;
}
 int main(){
Node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->left->left->left = newnode(8);
	root->left->right->left = newnode(9);
	root->left->right->right = newnode(10);
	root->left->right->left->left = newnode(11);

int k=11;
int dist=-1;
cout<<burntree(root,k,dist);
    return 0;
 }