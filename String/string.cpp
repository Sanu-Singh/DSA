// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // string str="Apple";
//     // cout<<str;

// string str1,str2;
// // cin>>str1 >> str2;

// // cout<< str1<< " " << str2;
// // it print the output with one space between str1 and str2;

// getline(cin,str1); // using this we take input in one line space
// cout<<str1;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     //  string str="Hello World!";
//     //  cout<<str;
    
//     char str[]="Hello !";
//     // cout<<str; if we are declring char string then we need to print 
//     //according to printf("%s",str);
//     printf("%s", str);
//     return 0;
//  }

int main(){
    
    // string str;
    // cin>>str;
    // cout<<str;
    // if i gave input as sanu singh
    // output is onlu sanu so we use getline func
    
    string str;
    getline(cin,str);
     cout<<str; // this is ginve full output
    
    // push_back: add to last of string
    str.push_back('s');
    cout<<str;
    return 0;
    
}