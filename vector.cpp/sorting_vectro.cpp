#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>v;
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        
    }
    cout<<"Array :"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"After sorting: "<<endl;
    for(int i=0; i<v.size(); i++){
        sort(v.begin(), v.end());
        cout<<v[i]<<" ";
    }
}