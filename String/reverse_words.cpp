// reverse word in string
#include<bits/stdc++.h>
using namespace std;

void reverseword(string str){
    string s="";
    vector<string>temp;
    for(int i=0; i<str.size(); i++ ){
        if(str[i]==' '){
            temp.push_back(s);
            s="";
        }else{
            s+=str[i];
        }
    }
    temp.push_back(s);
    for(int i=temp.size()-1; i>=0; i--){
        cout<<temp[i]<<" ";
    }
}
 int main(){
   
string str;
cout<<"Enter the string: ";
getline(cin,str);
    
 
  reverseword(str);
    
     return 0;
 }