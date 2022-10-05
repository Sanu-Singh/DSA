// Median of two sorted arrays of same size
// input : arr1[]={1,12,15,26,38};
//         arr2[]={2,13,17,30,45};
// Output : 16

// After merging two arrays, we get {1,2,12,13,15,17,26,30,38,45}
// middle two elements are 15 and 17 
// Average of middle elements is (15+17)/2
// which is equal to 16;
#include<bits/stdc++.h>
using namespace std;

int merge(int a[], int b[], int n, int m, int res[]){
    int i=0,j=0,k=0;
    int ans=0;
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
        sort(res,res+n+m);
        if((n+m)%2==0){
            ans=(res[(n+m)/2]+res[((n+m)-1)/2])/2;
        }else{
            ans=res[(n+m)/2];
        }
    }
    return ans;
}
int main()
{
    int a[]={1,12,15,26,38};
    int b[]={2,13,17,30,45};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int res[n+m];
   cout<<merge(a,b,n,m,res);
    return 0;
}