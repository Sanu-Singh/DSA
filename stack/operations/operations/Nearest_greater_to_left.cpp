#include<bits/stdc++.h>
using namespace std;
void nearestgreatertoleft(int arr[], int n){
    // for 1ts element -1
    
    stack<int>s;
    for(int i=1; i<n; i++){
        if(s.size()==0){
            cout<<-1<<" ";
        }
        else if(s.size()>0 && s.top()>arr[i]){
            cout<<s.top()<<" ";
        }else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                cout<<-1<<" ";
            }else{
                cout<<s.top()<<" ";
            }
        }
        s.push(arr[i]);
    }
}
int main(){
    int arr[]={10,4,2,0,40,12,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    nearestgreatertoleft(arr,n);
    return 0;
}