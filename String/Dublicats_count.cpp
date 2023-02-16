// print al the dublicates and its count in the string

#include<bits/stdc++.h>
using namespace std;
void countdublicates(string str){
    int n=str.size();
    unordered_map<char,int>m;
  for(int i=0; i<str.size(); i++){
    m[str[i]]++;
  }

  for(auto it:m){
    if(it.second >1){
   cout<< it.first <<"->"<<"Count: " << it.second<<endl;
    }
  }
}

 int main(){
    string str;
    getline(cin,str);
 countdublicates(str);
return 0;
 }