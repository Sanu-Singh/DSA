// Input : 
// arr[ ] = {2, 1, 5, 6, 3} 
// K = 3
// Output : 
// 1
// Explanation:
// To bring elements 2, 1, 3 together,
// swap index 2 with 4 (0-based indexing),
// i.e. element arr[2] = 5 with arr[4] = 3
// such that final array will be- 
// arr[] = {2, 1, 3, 6, 5}


#include<bits/stdc++.h>
using namespace std;
int minswap(int arr[], int n, int k){
    int good=0; // storing value <=k
    for(int i=0; i<n; i++){
        if(arr[i]<=k){
            good++;
        }
    }
    int bad=0; // storing value >k
    for(int i=0; i<good; i++){
        // for 1st window i.e 0 to 3 
        if(arr[i]>k){
            bad++;
        }
    } 
    int ans=bad;
    for(int i=0, j=good; j<n; i++,j++){
       if(arr[i]>k){
        bad--;
       }
       if(arr[j]>k){
        bad++;
       }
       ans=min(ans,bad);
    }
    return ans;

}
int main()
{ int arr[]={2,7,9,5,8,7,4};
int n=sizeof(arr)/sizeof(arr[0]);
int k=6;
cout<<minswap(arr,n,k);
    return 0;
}