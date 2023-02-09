#include<bits/stdc++.h>
using namespace std;
int merge(int arr[], int brr[], int n, int m){

    int start=0;
    int end=n;
    while(start<=end){
        int i1= (start+end)/2;
        int i2=((n+m+1)/2-i1);

        int min1 = (i1==n) ? INT_MAX : arr[i1];
        int max1= (i1==0) ? INT_MIN :  arr[i1-1];
        int min2 = (i2==n) ? INT_MAX : brr[i2];
        int max2= (i2==0) ? INT_MIN :  brr[i2-1];

     if((max1 <=min2) && (max2 <= min1)){
        if((n+m)%2==0){
            return ((double) (max(max1,max2)+ min(min1,min2))/2);
        }else{
            return ((double) (max(max1,max2)));
        }
     }else if(max1 > min2){
        end=i1-1;
     }else{
        start=i1+1;
     }

    }
return 0;
}

int main()
{ int arr[]={10,20,30};
 int brr[]={5,15,25,35,45};
 int n=sizeof(arr)/sizeof(arr[0]);
 int m=sizeof(brr)/sizeof(brr[0]);
cout<<merge(arr,brr,n,m);
    return 0;
}