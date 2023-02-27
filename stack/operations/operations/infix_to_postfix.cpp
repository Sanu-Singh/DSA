#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='/' || c=='*'){
    return 2;
    }else if(c=='+' || c=='-'){
        return 1;
    }else{
        return -1;
    }
}
void infixtopostfix(string str){
    stack<char>s;
    string res;
    int n= str.length();
    for(int i=0; i<n; i++){
        char c=str[i];
         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9')){
            res+=c;
        }else if(c=='('){
            s.push('(');
        }else if(c==')'){
            while(s.top()!='('){
                res+=s.top();
                s.pop();
            }
            s.pop();
        }else{
            while (!s.empty()&& prec(str[i])<=prec(s.top()) )
            {
                res+=s.top();
                s.pop();
            }
            s.push(c);
        }

    }
while(!s.empty()){
    res+=s.top();
    s.pop();
}
cout<<res<<endl;
}
int main(){
string str="a+b*(c^d-e)^(f+g*h)-i";
infixtopostfix(str);
    return 0;
}