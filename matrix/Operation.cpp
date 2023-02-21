//1) Addition 
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n=2,m=2;
   int arr1[n][m]={{1,2},{3,4}};
   int arr2[n][m]={{5,6},{7,8}};
   int arr3[n][m];
   int arr4[n][m];
   
  
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          arr3[i][j]=arr1[i][j]+arr2[i][j];
       }
      
   }
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          arr4[i][j]=(arr1[i][j]-arr2[i][j]);
       }
      
   }
   
   cout<<"print addition: "<<endl;
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          cout<<arr3[i][j]<<" ";
       }
       cout<<endl;
   }
   
    cout<<"print subtraction: "<<endl;
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          cout<<arr4[i][j]<<" ";
       }
       cout<<endl;
   }
    
    return 0;
}


