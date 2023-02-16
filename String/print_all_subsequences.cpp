#include<bits/stdc++.h>
using namespace std;
int subsequences(string str, string output[]){
    if(str.length()==0){
        output[0]=" ";
        return 1;
    }
int smalleroutput=subsequences(str.substr(1),output); // here we extract all character except 1st
for(int i=0; i<smalleroutput; i++){
    output[i+smalleroutput]=str[0]+output[i]; // in output array we paste it with 1st character 
}
    return 2*smalleroutput;  // here size got twice
}


int main(){
string output[1000];
cout<<"Enter the string: ";
string str;
getline(cin,str);
int outputsize=subsequences(str,output);
for(int i=0; i<outputsize; i++){
    cout<<output[i]<<endl;
}
    return 0;
}
