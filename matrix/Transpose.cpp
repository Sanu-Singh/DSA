#include<bits/stdc++.h>
using namespace std;
int main(){
   int n=2,m=2;
   int arr1[n][m];
   
   
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          cin>>arr1[i][j];
       }
      
   }
   
   
   
   cout<<"print original:"<<endl;
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          cout<<arr1[i][j]<<" ";
       }
       cout<<endl;
   }
    
   cout<<"print Transpose: "<<endl;
   for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
          cout<<arr1[j][i]<<" ";
       }
       cout<<endl;
   }
   
   
    
    return 0;
}