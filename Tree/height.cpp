#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node*left;
    Node*right;
    int data;
};

int height(Node* root) {
        if(root==NULL) 
        {
            return -1;
        }
        else {
            int l=height(root->left);
            int r=height(root->right);
            
            return (max(l,r)+1);
        }
    }

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
 
 
 int main()
 {
     struct Node*root=create();
    cout<< "Height of tree is " << height(root); 
    return 0; 
    
 }
   
