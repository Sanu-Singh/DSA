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
void bottomview(Node*root){
    if (root==NULL){
        return;
    }
    queue<pair<Node*,int>>q;
    map<int,int>m;
    q.push({root,0});
    while(!q.empty()){
      auto temp=q.front();
      q.pop();
      Node*curr=temp.first;
      int indx=temp.second;
      
      if(curr->left){
      q.push({curr->left,indx-1});
      }
      if(curr->right){
          q.push({curr->right, indx+1});
      }
      m[indx]=curr->data;
    }
    for(auto x:m){
        cout<<x.second<<" ";
    }
}

 int main(){
     Node*root=newnode(10);
 root->left=newnode(20);
    root->right=newnode(30);
    root->left->left = newnode(40);
	root->left->right = newnode(50);
	 root->right->left=newnode(80);
bottomview(root);
    return 0;
 }