// Check if the given string is shuffled substring of another string
// str1=xy;
// str2=12;
// res=x1y2;  // valid
// res=y1x2; // not valid;

#include<bits/stdc++.h>
using namespace std;
void shufflestring(string str1, string str2, string res){
    int n=str1.length();
    int m=str2.length();
    int r=res.length();
    int i=0,j=0,k=0;
    if((n+m)!=r){
        cout<<"Not ! Shuffle";
    }
while(k<r){
    if(i<n && str1[i]==res[k]){
        i++;
    }else if(j<m && str2[j]==res[k]){
        j++;
    }else{
        break;
    }
    k++;
}
if(i<n && j<m){
    cout<<"Not ! Shuflle";
}else{
    cout<<"Yes Shuffle";
}


}
 int main(){
    string str1="xy";
    string str2="12";
    string res="x1y2";
    shufflestring(str1,str2,res);
    return 0;
 }
