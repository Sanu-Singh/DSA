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
void leftview(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        cout<<q.front()->data<<" ";
        int n=q.size();
        while(n--){
            Node*temp=q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int main()
{ Node*root=newnode(10);
 root->left=newnode(20);
    root->right=newnode(30);
    root->left->left = newnode(40);
	root->left->right = newnode(50);
	 root->right->left=newnode(80);
    leftview(root);
    return 0;
}