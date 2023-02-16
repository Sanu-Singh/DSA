#include<bits/stdc++.h>
using namespace std;
#define d 256
void search(string str,string pat, int q)
{   int i,j;
    int m=pat.length();
    int n=str.length();
    int h=1;
    for( i=0; i<m-1; i++){
        h=(h*d)%q;
    }
    int p=0,t=0;
    for( i=0; i<m; i++){
        p=(p*d+pat[i])%q;
        t=(t*d+str[i])%q;
    }
    
    for( i=0; i<n-m; i++){
        if(p==t){
            for(j=0; j<n-m; j++){
            if(str[i+j]!=pat[j]){
                break;
            }
            }
        
        if(j==m){
            cout<<"Pattern found: "<<i<<endl;
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
string str ="AABAACAADAABAABA";
string pat="AABA";

int q=INT_MAX;

search(str,pat,q);
return 0;
    
}