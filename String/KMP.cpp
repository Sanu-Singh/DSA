#include<bits/stdc++.h>
using namespace std;
vector<int> findLPS(string str){
    int len=0;
    int m=str.length();
    int i=1;
    vector<int>lps(m,0);
    while(i<m){
        if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len!=0){
                len=lps[len-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
void kmpsearch(string str,string pat){
    int n=str.length();
    int m=pat.length();
    
   vector<int>lps= findLPS(pat);
    int i,j=0;
    while(i<n){
        if(pat[j]==str[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"Pat found at index: "<<(i-j)<<endl;
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=str[i]){
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }
}


int main(){
    string str = "GEEKSFORGEEKS";
    string pat = "GEEK";
    kmpsearch(str,pat);
    return 0;
}