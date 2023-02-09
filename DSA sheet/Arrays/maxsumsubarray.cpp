#include<bits/stdc++.h>
using namespace std;
int maxsumsubarray(int arr[], int n){
int res=arr[0];
int sum=arr[0];
for(int i=1; i<n; i++){
    sum=max(arr[i],sum+arr[i]);
    res=max(res,sum);
}
return res;


}


int main(){

int arr[]={1,2,3,-2,5};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Max subarray sum: "<<maxsumsubarray(arr,n);
return 0;

}