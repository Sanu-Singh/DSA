// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// Output:
// 6
// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6 
// numbers form the longest consecutive
// subsquence.

#include<bits/stdc++.h>
using namespace std;
// int longestconsecutive_subsequence(int arr[], int n){
//     int res=0;
//     int count=1;
//     sort(arr,arr+n);
//     for(int i=0; i<n; i++){
//         if(arr[i+1]==arr[i]+1){
//             count++;
//         }else{
//             res=max(res,count);                        //Naive approach
//             count=1;
//         }
//     }
//     res=max(res,count);
//     return res;
// }

//Better approach

//use set
// insert all value in set then check for its previous value if present then contiue to check if not then
// make current=that value and check for next element of current and count++

int longestconsecutive_subsequence(int arr[], int n){
  int res=0;
  unordered_set<int>s;
  for(int i=0; i<n; i++){
   s.insert(arr[i]);
  }
for(int i=0; i<n; i++){
    if(s.find(arr[i]-1)==s.end()){   // if present then continue to check else 
      int curr=arr[i];
      int count=0;
      while(s.find(curr)!=s.end()){
        curr++;
        count++;
      }
      res=max(res,count);
    }

}
return res;
}


int main()
{ int arr[]={1,2,3,4,6,7,8,9,10,11};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<longestconsecutive_subsequence(arr,n);
    return 0;
}