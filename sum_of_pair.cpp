#include<bits/stdc++.h>
using namespace std;
int sumofpair(int arr[], int n,int k){
    int count=0;
//     for(int i=0; i<n; i++){
//       for(int j=i+1; j<n; j++){
//         if(arr[i]+arr[j]==k){
//           count++;
//         }
//       }

//     }
// return count;

unordered_map<int,int>m;
for(int i=0; i<n; i++){
  int val=k-arr[i];
  if(m.find(val)!=m.end()){
    count+=m[val];
  }
  m[arr[i]]++;
}
    return count;
}

int main()
{

    int arr[]={1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<"No of pairs: ";
cout<<sumofpair(arr,n,k);
    return 0;
}