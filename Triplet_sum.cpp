// #include<bits/stdc++.h>
// using namespace std;
// bool triplet(int arr[], int n, int x){
//     sort(arr,arr+n);
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i]+arr[j]+arr[k]==x){
//                     return 1;
//                 }
//             }
//         }
//     }
//     return 0;
// }
// int main()
// { int arr[]={1,4,45,6,10,8};
// int n=sizeof(arr)/sizeof(arr[0]);
// int x=13;
//  cout<<triplet(arr,n,x);
//     return 0;
// }


// Better approach
#include<bits/stdc++.h>
using namespace std;
bool triplet(int arr[], int n, int x){
    sort(arr,arr+n);
    for(int i=0; i<n-2; i++){
        int start=i+1;
        int end=n-1;
while(start<end){
    if(arr[i]+arr[start]+arr[end]==x){
        return 1;
    }else{
        if(arr[i]+arr[start]+arr[end]<x){
            start++;
        }else{
            end--;
        }
    }
}
    }
    return 0;
}
int main()
{ int arr[]={1,4,45,6,10,8};
int n=sizeof(arr)/sizeof(arr[0]);
int x=13;
 cout<<triplet(arr,n,x);
    return 0;
}