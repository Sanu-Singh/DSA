// Given an array arr[] of N integers, calculate the median
 

// Example 1:

// Input: N = 5
// arr[] = 90 100 78 89 67
// Output: 89
// Explanation: After sorting the array 
// middle element is the median


#include<bits/stdc++.h>
using namespace std;
int median(int arr[], int n){
    sort(arr,arr+n);
    int ans=0;
    for(int i=0; i<n; i++){
        if(n%2==0){
            ans=(arr[n/2]+arr[(n-1)/2])/2;
        }else{
            ans=arr[n/2];
        }
    }
    return ans;
}
int main()
{ int arr[]={90,100,78,89,67};
 int n=sizeof(arr)/sizeof(arr[0]);
cout<<median(arr,n);
    return 0;
}