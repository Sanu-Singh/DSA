// Input:
// N = 5
// Arr[] = {6, -3, -10, 0, 2}
// Output: 180
// Explanation: Subarray with maximum product
// is [6, -3, -10] which gives product as 180

// #include<bits/stdc++.h>
// using namespace std;
//  int maxmproductsubarray(int arr[], int n){
//     int pro=0;
//     int maxmpro=0;
//     for(int i=0; i<n; i++){
//         pro=arr[i];
//     for(int j=i+1; j<n; j++){
//         
//         maxmpro=max(maxmpro,pro);
            //pro=pro*arr[j];
//     } 
//        maxmpro=max(maxmpro,pro);
//     }
//     return maxmpro;
//  }

// int main(){
//     int arr[]={6,-3,-10,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//   cout<<maxmproductsubarray(arr,n);
//     return 0;
// }



// more optimize method:

// in this method we have to use max and minm 
// we have to store maxm of (arr[i],maxm*arr[i])
// if subarray product is less then arr[i] we start our subarray from arr[i]
// if we get arr[i]<0 then swap max and min because when -ve multilpy with +ve is become more less

#include<bits/stdc++.h>
using namespace std;
int maxmproductsubarray(int arr[], int n){
    int maxm=arr[0];
    int minm=arr[0];
    int res=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<0){
            swap(maxm,minm);
        }
        maxm=max(arr[i],maxm*arr[i]);
        minm=min(arr[i],minm*arr[i]);
        res=max(res,maxm);
    }
    return res;
}

int main()
{ int arr[]={1,-2,-3,0,7,-8,-2};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<maxmproductsubarray(arr,n);
    return 0;
}