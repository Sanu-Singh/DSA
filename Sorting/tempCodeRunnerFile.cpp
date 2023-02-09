#include<bits/stdc++.h>
using namespace std;
void commonelement(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    set<int>s;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            for(int k=0; k<n3; k++){
                if(arr1[i]==arr2[j] && arr1[i]==arr3[k] && arr2[j]==arr3[k]){
                  s.insert(arr1[i]);
                  break;
                  // cout<< arr1[i]<<" ";
                }
            }
        }
    }
    for(auto it :s){
        cout<<it<<" ";
    }
    
}





int main()
{  int arr1[]={1,1,1,1,1};
int arr2[]={1,1,1,1};
int arr3[]={1,1,1,1,1};
int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);
int n3=sizeof(arr3)/sizeof(arr3[0]);
cout<<"Common in 3 array are: ";
commonelement(arr1,arr2,arr3,n1,n2,n3);
    return 0;
}