#include<bits/stdc++.h>
using namespace std;

int findDublicate(int arr[], int n){
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]==arr[j]){
    //             return arr[i];
    //         }
    //     }
    // }
    // return -1;   

    //using  O(N)
    // sort(arr,arr+n);
    // for(int i=0; i<n; i++){
    //     if(arr[i]==arr[i+1]){
    //        return arr[i];
    //     }
    // }
    // return -1;
    

    // using map
    unordered_map<int,int>m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it.second>1){
            return it.first;
        }
    }
    return -1;

}

int main(){

    int arr[]={1,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Dublicate Num: "<<findDublicate(arr,n);
return 0;

}