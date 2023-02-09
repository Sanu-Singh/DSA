// Input:
// N = 8, M = 5
// A = {3, 4, 1, 9, 56, 7, 9, 12}
// Output: 6
// Explanation: The minimum difference between 
// maximum chocolates and minimum chocolates 
// is 9 - 3 = 6 by choosing following M packets :
// {3, 4, 9, 7, 9}.


#include<bits/stdc++.h>
using namespace std;
int choclatedistribution(int arr[], int n, int m){
    int min_dif=INT_MAX;
    // for(int i=0; i+m-1<n; i++){
    //     sort(arr,arr+n);
    //     int diff=arr[i+m-1]-arr[i];        
    //     min_dif=min(min_dif,diff);
    // }
    // return min_dif;

    //Efficient approach
    sort(arr,arr+n);
    int i=0;
    int j=m-1;
    while(j<n){
       int diff=arr[j++]-arr[i++];
       min_dif=min(min_dif,diff);
    }
    return min_dif;

}
int main()
{ int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
int n=sizeof(arr)/sizeof(arr[0]);
int m=5;
cout<<choclatedistribution(arr,n,m);
    return 0;
}