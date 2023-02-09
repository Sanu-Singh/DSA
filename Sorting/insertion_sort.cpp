#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n){
 for(int i=0; i<n; i++){
//     for(int j=i+1; j>0; j--){
//         if(arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//         }
//     }
int curr=arr[i];
int j=i-1;
while(j>=0 && arr[j]>curr ){
    arr[j+1]=arr[j];
    j--;
}
 arr[j+1]=curr;
 
}
for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main()
{
int arr[]={50,4,1,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Insertion sort: ";
insertionsort(arr,n);
return 0;
}