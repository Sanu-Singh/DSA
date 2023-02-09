#include<bits/stdc++.h>
using namespace std;
 struct Node
 {
     int data;
     struct Node*left;
     struct Node*right;
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
 
 
 int main()
 {
     struct Node*root=create();
    
    
 }