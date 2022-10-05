#include<bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int n, int k){
    int res=0;
    
 for(int i=0; i<n; i++)
{
    sort(arr,arr+n);
  res=arr[k-1];
}
return res;
}
int kthlargest(int arr[], int n, int k){
   
    int lar=0;
 for(int i=0; i<n; i++)
{
    sort(arr,arr+n);
    if(n%2==0){
    lar=arr[n-k];
    }else {
        lar=arr[k-1];
    }
  
}
return lar;
}

int main(){
cout<<"Enter the size: ";
int n;
cin>>n;
int arr[n];
cout<<"Enter the array elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int k;
cout<<"Enter the kth: ";
cin>>k;

cout<<"smallest num: "<<kthsmallest(arr,n,k)<<endl;
cout<<"Largest num: "<<kthlargest(arr,n,k);
return 0;

}