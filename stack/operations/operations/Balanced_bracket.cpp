// {([])} balanced 
#include<bits/stdc++.h>
using namespace std;
bool checkbalanced(string str){
stack<char>s;
int n=str.length();
for(int i=0; i<n; i++){
    if(s.empty()){
        s.push(str[i]);
    }else if(s.top()=='(' && str[i]==')' || s.top()=='{' && str[i]=='}' || s.top()=='[' && str[i]==']'){
        s.pop();
    }else{
        s.push(str[i]);
    }
}
if(s.empty()){
    return true;
}else{
    return false;
}
}
int main()
{
    string str="{([])}[]";
    if(checkbalanced(str)){
        cout<<"Balanced";
    }else{
        cout<<"Not Balanced!";
    }

    return 0;
}
