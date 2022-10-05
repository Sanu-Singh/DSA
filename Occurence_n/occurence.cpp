// int arr[] = { 1, 1, 2, 2, 3, 5,
//                   4, 2, 2, 3, 1, 1, 1 };
   
//     int k = 4;
//     output= 1 2

#include<bits/stdc++.h>
using namespace std;
void more_then_nbyk(int arr[], int n,int k){
    unordered_map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        if(x.second >n/k){
            cout<<x.first<<" ";
        }
    }
}
int main()
{
    int arr[]={1,1,2,2,3,5,4,2,2,3,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    more_then_nbyk(arr,n,k);
    return 0;
}