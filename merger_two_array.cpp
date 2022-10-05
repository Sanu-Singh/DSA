#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int n, int m, int res[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }else{
            res[k++]=b[j++];
        }
    }
    while(i<n){
        res[k++]=a[i++];
    }
    while(j<m){
        res[k++]=b[j++];
    }
    cout<<"Merged array: "<<endl;
    for(int i=0; i<n+m; i++){
        cout<<res[i]<<" ";
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int res[n+m];
   merge(a,b,n,m,res);
    return 0;
}