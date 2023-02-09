#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node*left;
Node*right;
};
Node* newnode(int newdata){
    Node*root=new Node();
   root->data=newdata;
   root->left=NULL;
   root->right=NULL;
   return root;

}
// bool findpath(Node*root, vector<int>&p, int k){
//     if(root==NULL){
//         return 0;
//     }
//     p.push_back(root->data);
//     if(root->data==k){
//         return 1;
//     }

// }
// int findLCA(Node*root, int n, int m){
//     vector<int>p1,p2;
//     if(!findpath(root,p1,n) || ! findpath(root,p2,m)){
//         return -1;
//     }
//     int i=0;
//     for(i=0; i<p1.size() && i<p2.size(); i++){
//         if(p1[i]!=p2[i]){
//           break;
//         }
//     }
//     return p1[i-1];
// }
Node*LCA(Node*root,int n, int m){
    if(root==NULL){
        return  NULL;
    }
    if(root->data==n || root->data==m){
        return root;
    }
    Node*lfh=LCA(root->left,n,m);
    Node*rfh=LCA(root->right,n,m);
    if(lfh && rfh){
        return root;
    }
    if(lfh!=NULL){
        return lfh;
    }else{
        return rfh;
    }
}

int main(){
    Node*root=newnode(10);
     root->left = newnode(20);
    root->right = newnode(30);
    root->left->left = newnode(70);
    root->left->right = newnode(60);
    root->right->left = newnode(50);
    root->right->right = newnode(40);
//    cout<<findLCA(root,40,50);
cout<< LCA(root,40,60)->data;
    return 0;
}