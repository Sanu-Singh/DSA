#include<bits/stdc++.h>
using namespace std;
#define R 4 
#define C 4
void printcircular(int m,int n,int arr[R][C]){
   int k=0,l=0;
   while(k<m && l<n){
       //print 1st row
       for(int i=l; i<n; i++){
           cout<<arr[k][i]<<" ";
       }
       k++;
       
       //print last coln 
       for(int i=k; i<=m-1; i++){
           cout<<arr[i][n-1]<<" ";
       }
       n--;
       
       if(k<m){
           for(int i=n-1; i>=l; i--){
               cout<<arr[m-1][i]<<" ";
           }
           m--;
       }
       if(l<n){
           for(int i=m-1; i>=k; i--){
               cout<<arr[i][l]<<" ";
           }
           l++;
       }
   }
   
    
}


 int main(){
    
     int arr[R][C]={{1,2,3,4},
                    {5,6,7,8},
                   {9,10,11,12},
                  {13,14,15,16}};
     printcircular(R,C,arr);
     return 0;
 }