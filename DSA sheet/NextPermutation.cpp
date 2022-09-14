// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// // Output: [1,5,1]
// Given an array of integers nums, find the next permutation of nums.
#include<bits/stdc++.h>
using namespace std;

vector<int>nextpermutation(vector<int>&arr, int n){
int i,j;
for(int i=n-2; i>=0; i--){
    if(arr[i]<arr[i+1]){
        break;
    }
}
if(i<0){
    reverse(arr.begin(),arr.end());
}
for(int j=n-1; j>i; j--){
    if(arr[j]>arr[i]){
        break;
    }
}
swap(arr[i],arr[j]);
sort(arr.begin()+i+1,arr.end());
 return arr;
}


int main(){
// int arr[]={1,2,3,6,5,4};
// int n=sizeof(arr)/sizeof(arr[0]);


vector<int>arr={1,2,3,6,5,4};
int n=arr.size();
cout<<"Next permutation: "<<endl;
nextpermutation(arr,n);
return 0;
}