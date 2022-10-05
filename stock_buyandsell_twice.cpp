// Input:
// 7
// 2 30 15 10 8 25 80
// Output:
// 100
// Explanation:

// Trader earns 100 as sum of 28 and 72
// Buy at price 2, sell at 30,
// Buy at 8 and sell at 80
 

 //Naive approach:

// #include<bits/stdc++.h>
// using namespace std;
// int maxProfit(int arr[], int start,int end){
//     int profit=0;
//     int mxprofit=0;
//     for(int i=start; i<end; i++){
//         for(int j=i+1; j<=end; j++){
//             if(arr[j]>arr[i]){
//                 profit=arr[j]-arr[i]+maxProfit(arr,j+1,end);
//                 mxprofit=max(profit,mxprofit);
//             }
//         }
//     }
//     return mxprofit;
// }
 

// int main()
// { int arr[]={2,30,15,10,8,25,80};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<maxProfit(arr,0,n-1);
//     return 0;
// }

// Better approach
#include<bits/stdc++.h>
using namespace std;
int maxProfit(int arr[], int n){
    int* profit = new int[n];
    for(int i=0; i<n; i++){
        profit[i]=0;
    }

    int maxprice=arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(arr[i]>maxprice)
         maxprice=arr[i];
        
        profit[i]=max(profit[i+1],maxprice-arr[i]);
    }

    int minprice=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<minprice)
            minprice=arr[i];
        
        profit[i]=max(profit[i-1],profit[i]+(arr[i]-minprice));
    }
int result=profit[n-1];
delete profit;
return result;
}
 

int main()
{ int arr[]={2,30,15,10,8,25,80};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<maxProfit(arr,n);
    return 0;
}