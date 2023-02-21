#include<bits/stdc++.h>
using namespace std;
bool isrotate(string str1, string str2){
    int n=str1.length();
    int m=str2.length();
    // if(n!=m){
    //     return false;
    // }
    // string temp=str1+str1;
    // if(temp.find(str2)!=string::npos){
    //     return true;
    // }
    
    // return false;
     queue<char>q1;
    for(int i=0; i<n; i++){
        q1.push(str1[i]);
    }
    
    queue<char>q2;
    for(int i=0; i<m; i++){
        q2.push(str2[i]);
    }
    while(m--){
        char ch=q2.front();
        q2.pop();
        q2.push(ch);
        if(q2==q1){
            return true;
        }
    }
    return false;
}
 int main(){
     string str1="ABCD";
     string str2="CDAB";
     if(isrotate(str1,str2)==true){
         cout<<"Rotated";
     }else{
         cout<<"Not rotated";
     }
     return 0;
 }