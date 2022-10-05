#include<bits/stdc++.h>
using namespace std;
void moveallnegative(int arr[], int n){
    int temp[n]={0};
    int count=0;
for(int i=0; i<n; i++){
    if(arr[i]<0){
        temp[count]=arr[i];
        count++;
    } 
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            temp[count]=arr[i];
            count++;
        }
    }
for(int i=0; i<n; i++){
    cout<<temp[i]<<" ";
}

}
int main(){
    cout<<"Enter the size: ";
    int n; 
    cin>>n;
    int arr[n];
    cout<<"enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
moveallnegative(arr,n);
return 0;

}