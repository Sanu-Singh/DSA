// we have to minimize the diff
// ex 1 5 8 10
// mam diff=10-1=9 we have minm in
// 1+k-10-k so ans got minmimze

// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1



// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K.
// Decrease the height of the tower by K ( you can do this operation only if the height of the tower is greater than or equal to K)
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

#include<bits/stdc++.h>
using namespace std;

int minmdiff(int arr[], int n, int k){
 sort(arr,arr+n);
 int ans=arr[n-1]-arr[0];
 int samllest=arr[0]+k;
 int largest=arr[n-1]-k;
 int minm,maxm;
 for(int i=0; i<n-1; i++){
    minm=min(samllest,arr[i+1]-k);
    maxm=max(largest,arr[i]+k);
    if(minm<0){
        continue;
    }
    ans=min(ans,maxm-minm);
 }

return ans;



}


int main(){
    int arr[]={1,3,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
   cout<<"Minm difference is: "<<minmdiff(arr,n,k);
    return 0;

}