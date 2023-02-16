// Anagram check
#include<bits/stdc++.h>
using namespace std;
// #define NO_OF_CHARS 256
// bool isanagram(string str1, string str2){
//     int count1[NO_OF_CHARS]={0};
//     int count2[NO_OF_CHARS]={0};
//     int i;
//     for(int i=0; i<str1.length(); i++){
//         count1[str1[i]]++;
//     }
//     for(int i=0; i<str2.length(); i++){
//         count2[str2[i]]++;
//     }
//     for (i = 0; i < NO_OF_CHARS; i++)
//         if (count1[i] != count2[i])
//             return false;

//     return true;
// }
bool isanagram(string str1, string str2){
    sort(str1.begin(),str1.end());
     sort(str2.begin(),str2.end());
     if(str1==str2){
         return true;
     }
     return false;
}
 int main(){
   
         string str1;
         string str2;
    
     cout<<"Enter the string: ";
     cin>>str1;
     cout<<"Enter the string: ";
     cin>>str2;
     
    if(isanagram(str1,str2)==true){
        cout<<"true";
    }else{
        cout<<"False";
    }
    
     return 0;
 }