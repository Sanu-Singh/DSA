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

int findmaxm(Node*root){
    if(root==NULL){
        return -1;
    }
    int temp=root->data;
    int lfm=findmaxm(root->left);
    int rfm=findmaxm(root->right);
    return max(temp,max(lfm,rfm));
    
    
    

}

int main()
{ Node*root=newnode(10);
 root->left=newnode(20);
    root->right=newnode(30);
    root->left->left = newnode(40);
	root->left->right = newnode(50);
	 root->right->left=newnode(80);
    cout<<findmaxm(root);
    return 0;
}