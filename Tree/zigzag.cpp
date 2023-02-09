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
void spiraltraversal(Node*root){
    if(root==NULL){
        return;
    }
    stack<int>s;
    queue<Node*>q;
    q.push(root);
    bool flag=false;
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node*temp=q.front();
            q.pop();
            if(flag==true){
                s.push(temp->data);
            }else{
                cout<<temp->data<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    
    if(flag==true){
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    flag=!flag;
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
    spiraltraversal(root);
    return 0;
 }