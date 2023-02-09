// #include<bits/stdc++.h>
// using namespace std;
// void selectionsort(int arr[], int n){
//     int small;
//     for(int i=0; i<n-1; i++){
//         small=i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[small])
//                 small=j;
            
//         }
//             swap(arr[small], arr[i]);
        
//     }
//    for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={4,1,2,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     selectionsort(arr,n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
    int maxm;
    for(int i=n-1; i>=0; i--){
        maxm=i;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[maxm])
            maxm=j;

        }
        swap(arr[i],arr[maxm]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={40,10,20,30,50};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"Selection sort:";
     selectionsort(arr,n);
  return 0;
}