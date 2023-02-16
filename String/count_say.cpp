// Input:
// n = 5
// Output: 111221
// Explanation: The 5th row of the given pattern
// will be 111221.
#include<bits/stdc++.h>
using namespace std;
string countandsay(int n){
   if(n==1)
   return "1";
   if(n==2)
   return "11";
   string str="11";
   for(int i=3; i<=n; i++){
    str+="$";
    string temp="";
    int count=1;
    int len=str.length();
    for(int j=1; j<len; j++){
        if(str[j]!=str[j-1]){
            temp+=count+'0';
            temp+=str[j-1];
            count=1;
        }else{
            count++;
        }
    }
    str=temp;
   }
   return str;
}
 int main(){
    int n;
    cout<<"Entet the Number: ";
    cin>>n;
    cout<<countandsay(n);
    return 0;
 }