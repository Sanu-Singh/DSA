#include<bits/stdc++.h>
using namespace std;
int smallestsubarray(int arr[], int n, int x){
    // int res=n+1;
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     sum=arr[i];
    //     if(sum>x){
    //         return 1;
    //     }                                              //O(n2)
    //     for(int j=i+1; j<n; j++){
    //         sum+=arr[j];
    //         if(sum>x &&  (j-i+1)<res){
    //             res=(j-i+1);
    //         }
    //     }
    // }
    // return res;


    // Efficient Approach

    int res=n+1;
    int sum=0;
    int i=0,j=0;
    while(j<n){
        while(sum<=x && j<n){
            sum+=arr[j++];
        }
        while(sum>x && i<n){
            if(j-i < res){
                res=j-i;
            }
            sum=sum-arr[i++];
        }
    }
    return res;
}

int main()
{ int arr[]={1,4,45,6,0,19};
int n=sizeof(arr)/sizeof(arr[0]);
int x=51;
cout<<smallestsubarray(arr,n,x);
    return 0;
}