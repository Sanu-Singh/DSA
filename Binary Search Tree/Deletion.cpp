#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
Node*newnode(int newdata){
    Node*temp=new Node;
    temp->data=newdata;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
Node*insertion(Node*root,int data){
   if(root==NULL){
    return newnode(data);
   } 
if(data< root->data){
    root->left=insertion(root->left,data);
}else{
    root->right=insertion(root->right,data);
}
return root;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
Node *getSuccessor(Node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

Node *delNode(Node *root, int x){
    if(root==NULL)
        return root;
    if(root->data>x)
        root->left=delNode(root->left,x);
    else if(root->data<x)
        root->right=delNode(root->right,x);
    else{
        if(root->left==NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ=getSuccessor(root);
            root->data=succ->data;
            root->right=delNode(root->right,succ->data);
        }
    }
    return root;
} 

int main(){
Node*root=NULL;
root=insertion(root,40);
root=insertion(root,30);
root=insertion(root,50);
root=insertion(root,25);
root=insertion(root,35);
root=insertion(root,45);
root=insertion(root,60);
cout<<"Binary Search Tree: "<<endl;
levelOrderTraversal(root);
int k=50;
delNode(root,k);
cout<<"After deletion: "<<endl;
levelOrderTraversal(root);
}