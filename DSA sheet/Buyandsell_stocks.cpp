// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
#include<bits/stdc++.h>
using namespace std;
// int maxmprofit(int arr[], int n){
// int profit=0;
// int maxmprofit=0;
// for(int i=0;i<n; i++){
//     for(int j=i+1; j<=n-1; j++){
//         if(arr[j]>arr[i]){                              //O(N2)
//             profit=arr[j]-arr[i];
//              maxmprofit=max(maxmprofit,profit);
//         }
//     }
// }
// return maxmprofit;
// }
int maxmprofit(int arr[], int n){
    int minm=INT_MAX;
    int profit=0;
    for(int i=0; i<n; i++){
        minm=min(minm,arr[i]);
        profit=max(profit,arr[i]-minm);
    }
 return profit;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"Maxm Profit : "<<maxmprofit(arr,n);
    return 0;
}