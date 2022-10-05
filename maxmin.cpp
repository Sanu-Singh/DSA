#include<bits/stdc++.h>
using namespace std;

int summaxmin(int arr[], int n){
    int sum=0;
    int minm=arr[0];
    int maxm=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxm){
            maxm=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<minm){
            minm=arr[i];
        }
    }
    sum=minm+maxm;
    return sum;
}


int main(){
    cout<<"Enter array size: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<summaxmin(arr,n);
    return 0;
}