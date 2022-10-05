 // merge two sorted array without extra space
// Input: 
// n = 4, arr1[] = [1 3 5 7] 
// m = 5, arr2[] = [0 2 6 8 9]
// Output: 
// arr1[] = [0 1 2 3]
// arr2[] = [5 6 7 8 9]

#include<bits/stdc++.h>
using namespace std;
void mergesortedarray(int arr1[], int n, int arr2[], int m){
    int i=0;
    int j=0;
    int last=n-1;
    while(i<=last && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }else{
            swap(arr2[j],arr1[last]);
                j++;
                last--;
            }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
    }



int main(){
int arr1[]={1,3,5,7};
int arr2[]={0,2,6,8,9};
int n=sizeof(arr1)/sizeof(arr1[0]);
int m=sizeof(arr2)/sizeof(arr2[0]);

mergesortedarray(arr1,n,arr2,m);
for(int i=0; i<n; i++){
    cout<<arr1[i]<<" ";
}
for(int i=0; i<n; i++){
    cout<<arr2[i]<<" ";
}


return 0;

}