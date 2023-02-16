#include<bits/stdc++.h>
using namespace std;
#define d 256

void rabinkarp(string str, string pat, int q){
int n=str.length();
int m=pat.length();
int i,j=0;
int p=0;
int t=0;
int h=1;
for(int i=0; i<m-1; i++){
    h=(h*d)%q;
}
for(i=0; i<m; i++){
    p=(d*p+pat[i])%q;
    t=(d*t+str[i])%q;
}
for(int i=0; i<=n-m; i++){
    if(p==t){
        for(j=0; j<m; j++){
            if(str[i+j]!=pat[j]){
                break;
            }
        }
        if(j==m){
            cout<<"Pat found at index: "<<i<<endl;
        }
    }
    if(i<n-m){
        t=(d*(t-str[i]*h)+str[i+m])%q;
        if(t<0){
            t=t+q;
        }
    }
}
    
}
int main(){
    string str="GEEKSFORGEEKS";
    string pat="GEEKS";
    int q=101;
    rabinkarp(str,pat,q);
    return 0;
}