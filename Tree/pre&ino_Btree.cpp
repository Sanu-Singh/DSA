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
// Node*buildtree(int ino[], int pre[], int is, int en){
    
// }
int pindx=0;
Node*ctree(int ino[], int pre[], int is, int en){
    if(is>en){
        return NULL;
    }
    Node*root=newnode(pre[pindx]);
    pindx++;
    int indx=0;
    for(int i=is; i<=en; i++){
        if(ino[i]==root->data){
            indx=i;
            break;
        }
    }
    root->left=ctree(ino,pre,is,indx-1);
    root->right=ctree(ino,pre,indx+1,en);
    return root;
}
void printInorder(Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
   
    printInorder(node->left);
  cout<<node->data<<" ";
    /* then print the data of node */
    
 
    /* now recur on right child */
    printInorder(node->right);
}

 int main(){
 int ino[]={3,1,4,0,5,2};
 int pre[]={0,1,3,4,2,5};
 int n=sizeof(ino)/sizeof(int);
 Node*root=ctree(ino,pre,0,n-1);
  cout << "Inorder traversal of the constructed tree is \n";
 
printInorder(root);
return 0;
 }