#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node*left;
  Node*right;
};
Node* create(int newdata){
    Node*newnode=new Node;
    newnode->data=newdata;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node*insertion(Node*root,int newdata){
    if(root==NULL){
        // create the Node
        return create(newdata);
    }
    if(newdata < root->data){
        root->left=insertion(root->left,newdata);
    }else{
        root->right=insertion(root->right,newdata);
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
}