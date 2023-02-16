// Naive methid of pattern searching
#include<bits/stdc++.h>
using namespace std;
void patsearch(string str,string pat){
    int n=str.length();
    int m=pat.length();
    int i,j;
    for( i=0; i<=n-m; i++){
        for(j=0; j<m; j++){
            if(str[i+j]!=pat[j]){
                break;
            }
        }
        if(j==m){
            cout<<"Patter found at index: "<<i<<endl;
        }
    }
    
}

int main(){
string str;
string pat;
cout<<"Enter the string: ";
// cin>>str;
getline(cin,str);
cout<<"Enter the pattern: ";
// cin>>pat;
getline(cin,pat);
patsearch(str,pat);
     return 0;
}

