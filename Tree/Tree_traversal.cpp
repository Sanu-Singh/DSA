#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
 struct Node*create()
 {
     int newdata;
     struct Node*newnode=new Node();
     cout<<"Enter the data: ";
     cin>>newdata;
     if(newdata==-1)
     {
         return 0;
     }

     newnode->data=newdata;
     cout<<"Enter the left child of"<<newdata<<endl;
     newnode->left=create();
     cout<<"Enter the right child of"<<newdata<<endl;
     newnode->right=create();
     return newnode;
 }
 
 
void preOrder(Node *root) {
        if(root==NULL)
        {
            return;
        }
        else {
            cout<<root->data<<"-->";
            preOrder(root->left);
            preOrder(root->right);
        }

    }
void inorder(Node*root){
    
    if(root==NULL)
    {
        return ;
    }
   
    inorder(root->left);
     cout<<root->data<<"-->";
    inorder(root->right);
}


void postorder(Node*root){
     
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"-->";
}


int main() {
    struct Node*root=create();
    cout<<"preorder of Tree is:"<<preOrder<<endl;
    preOrder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);
 
    return 0;

}