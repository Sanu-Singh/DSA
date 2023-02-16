#include<bits/stdc++.h>
using namespace std;
bool rotatedornot(string str1,string str2){
 if(str1.size()!=str2.size()){
    return false;
 }
string temp=str1+str1;
if(temp.find(str2)!=string::npos){
    return true;
}else{
return false;
}
    
}
int main(){
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;

if(rotatedornot(str1,str2)==true){
    cout<<"String are rotation of eachother";
}else{
    cout<<"String are not rotation of eachother";
}
return 0;
}