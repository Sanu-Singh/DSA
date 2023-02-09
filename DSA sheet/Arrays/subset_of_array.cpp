#include<bits/stdc++.h>
using namespace std;
void subset(int arr1[], int arr2[], int n,int m){
    // sort(arr1,arr1+n);
    // sort(arr2,arr2+m);
    // int count=0;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //     if(arr1[i]==arr2[j]){
    //         count++;
    //     }
    //     }
    // }
    // if(count==m){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }


    // map
    unordered_map<int,int>s;
    int count=0;
    for(int i=0; i<n; i++){
      s[arr1[i]]++;
    }
    for(int i=0; i<m; i++){
        if(s.find(arr2[i])!=s.end()){
             count++;
        }
    }
    if(count==m){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
}

int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={1,2,4};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    subset(arr1,arr2,n,m);
    return 0;
}