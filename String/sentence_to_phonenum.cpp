//HELLO -> 443355555566

#include<bits/stdc++.h>
using namespace std;
string printsequqnce(string arr[], string input){
    int n=input.length();
 string output="";
 for(int i=0; i<n; i++){
    if (input[i]==' '){
        output+="0";
    }else{
        int j=input[i]-'A';
        output+=arr[j];
    }
 }
return output;
}
 int main(){
    string arr[]={ "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };

     string input="HELLO";
     cout<<printsequqnce(arr,input);
     return 0;       
 }