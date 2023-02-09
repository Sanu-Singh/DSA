#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right){
 
//  left=0;
//  right=n-1;
//  mid=(left+right)/2;
int n1=mid-left+1;
int n2=right-mid;
int arr1[n1];
int arr2[n2];
// storing left vlaue in arr1 and righthalf in arr2
for(int i=0; i<n1; i++){
    arr1[i]=arr[left+i];
}
for(int j=0; j<n2; j++){
    arr2[j]=arr[mid+1+j];
}

// now compare elements of both arr and move to single arra
int i=0;
int j=0;
int k=left;
while(i<n1 && j<n2){
if(arr1[i]<=arr2[j]){
  arr[k++]=arr1[i++];
}else{
    arr[k++]=arr2[j++];
}
}
while(i<n1){
    arr[k++]=arr1[i++];
}
while(i<n2){
    arr[k++]=arr2[j++];
}

}
void mergesort(int arr[],int left, int right){
    int mid;
       
    if(left<right){
        mid=(left+right)/2;
      mergesort(arr,left,mid);
      mergesort(arr,mid+1,right);
      merge(arr,left,mid,right);
    }
}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main()
{
    int arr[]={38,27,43,3,9,82,10};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"After mergesort: ";
    
    mergesort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}