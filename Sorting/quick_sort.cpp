// input[]={10,80,30,90,40,50,70}
// output=10,30,40,50,70,80,90

#include<bits/stdc++.h>
using namespace std;

int divide(int arr[], int low, int high){
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low; j<=high-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
   return(i+1);
}
void quicksort(int arr[], int low, int high){
if(low<high){
    int mid=divide(arr,low, high); // movepivot to right place
     quicksort(arr, low, mid-1); // quicksort on left half
     quicksort(arr,mid+1,high); //quicksort on right half
}

}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={10,30,40,80,90,50,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"After sorting: ";
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}