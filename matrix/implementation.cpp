// int arr[n][m]={{1,2},{3,4}};
// output=1 2
//        3 4

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n=2,m=2;
   int arr[n][m];
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          cin>>arr[i][j];
       }
      
   }
   
   cout<<"print"<<endl;
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}