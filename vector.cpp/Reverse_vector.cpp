#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the size :";
    vector<int>v;
    int n;
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Array :";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Array in reverse order: ";
     reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
       
        cout<<v[i]<<" ";
    }
}