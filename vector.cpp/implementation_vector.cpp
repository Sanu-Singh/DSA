#include<bits/stdc++.h>
using namespace std;

 void printvector(vector<int>v){
    cout<<"Size of vector :"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        int x;
        
        cin>>x;
        v.push_back(x);
    }
    printvector(v);
}