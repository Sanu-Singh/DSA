#include<bits/stdc++.h>
using namespace std;
vector<int> nearestgreatertoright(int arr[], int n){
    // for right we traverse from last
    vector<int>v;
    stack<int>s;
    for(int i=n-1; i>=0; i--){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}
void print(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int arr[]={6,8,0,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    vector<int>v= nearestgreatertoright(arr,n);
    print(v);
    return 0;
}