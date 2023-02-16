#include<bits/stdc++.h>
using namespace std;
vector<int> findlps(string str){
    int n=str.length();
    int len=0;
    int i=1;
   vector<int>lps(n,0);
    while(i<n){
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
    
    int i,j=0;
   vector<int>lps= findlps(pat);
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

    string str="geeksforgeeks";
    string pat="geeks";
    kmpsearch(str,pat);
    return 0;
 }