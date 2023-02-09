#include<bits/stdc++.h>
using namespace std;
#define MAX 500

// int multiply(int x, int arr[], int arr_size );
// void factorial(int n){
// int arr[MAX];
// //int arr_size=sizeof(arr)/sizeof(arr[0]);
// arr[0]=1;
// int arr_size=1;
// for(int x=2; x<=n; x++){
//     arr_size=multiply(x,arr,arr_size);
// }

// for(int i=arr_size-1; i>=0; i--){
//     cout<<arr[i];
// }
// }

// int multiply(int x, int arr[], int arr_size ){
//     int carry=0;
// for(int i=0; i<arr_size; i++){
//     int prod=arr[i]*x+carry;
//     arr[i]=prod%10;
//     carry=prod/10;
// }
// while(carry){
//     arr[arr_size]=carry % 10;
//     carry=carry / 10;
//     arr_size++;
// }
// return arr_size;
// }

// int factorial(int n){
//     vector<int>v;
//     v.push_back(1);
//     int carry=0;
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<v.size(); j++){
//          int prod=v[j]*i+carry;
//          v[j]=prod%10;
//          carry=prod/10;
//         }
//         while(carry){
//             v.push_back(carry%10);                         using vector
//             carry=carry/10;
//         }
//     }
//     reverse(v.begin(),v.end());
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i];
//     }
//     return 0;
// }




int main()
{
    cout<<"Enter the number: ";
    int n; 
    cin>>n;
    factorial(n);
    return 0;
}