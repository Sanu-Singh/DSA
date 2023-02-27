#include<bits/stdc++.h>
using namespace std;
int maxmrectangle(int arr[], int n){
    // find nearest smalles to left
    // nearest small to right 
    vector<int>left;
    stack<pair<int,int>>s1;
    int lindx=-1;
    for(int i=0; i<n; i++){
        if(s1.size()==0){
            left.push_back(lindx);
        }else if(s1.size()>0 && s1.top().first < arr[i]){
            left.push_back(s1.top().second); // stroign indx of small ele
        }else if(s1.size()>0 && s1.top().first>=arr[i]){
            while(s1.size()>0 && s1.top().first>=arr[i]){
                s1.pop();
            }
            if(s1.size()==0){
                left.push_back(lindx);
            }else{
                left.push_back(s1.top().second);
            }
        }
        s1.push({arr[i],i});
    }
    
    vector<int>right;
    stack<pair<int,int>>s2;
    int rindx=7;
    for(int i=n-1; i>=0; i--){
        if(s2.size()==0){
            right.push_back(rindx);
        }else if(s2.size()>0 && s2.top().first <arr[i]){
            right.push_back(s2.top().second);
        }else if(s2.size()>0 && s2.top().first>=arr[i]){
            while(s2.size()>0 && s2.top().first>=arr[i]){
                s2.pop();
            }
            if(s2.size()==0){
                right.push_back(rindx);
            }else{
                right.push_back(s2.top().second);
            }
        }
        s2.push({arr[i],i});
    }
    vector<int>ans;
     reverse(right.begin(),right.end());
    for(int i=0; i<n; i++){
    
    int x=(right[i]-left[i]-1)*arr[i];
    ans.push_back(x);
    
    
    }
    sort(ans.begin(),ans.end());
    return ans[n-1];
}
int main(){
int arr[]={6,2,5,4,5,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
cout<< maxmrectangle(arr,n);
return 0;
}