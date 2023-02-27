#include<bits/stdc++.h>
using namespace std;
void stock_span(int arr[], int n, int ans[]){
ans[0]=1;
for(int i=1; i<n; i++){
ans[i]=1;
for(int j=i-1; j>=0 && arr[i]>=arr[j]; j--){
    ans[i]++;
}
}
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={100,80,60,70,60,75,85};
int n=sizeof(arr)/sizeof(arr[0]);
int ans[n];
stock_span(arr,n,ans);
print(ans,n);
    return 0;
}