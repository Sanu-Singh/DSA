#include<bits/stdc++.h>
using namespace std;
string palindrome(string str){
    int n= str.size();
    // string rev;
    // for(int i=n-1; i>=0; i--){
    //     rev.push_back(str[i]);
    // }
    // if(rev==str){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }

for(int i=0; i<n/2; i++){
    
        if(str[i]!=str[n-i-1]){
            
          return "No";
        }
}

return "Yes";
}
int main(){
string str;
cin>>str;
 cout<< palindrome(str);
return 0;

}

// palindrome check in string
// #include<bits/stdc++.h>
// using namespace std;
// bool ispalindrome(string str,int n){
//     string revstr=str;
//     reverse(revstr.begin(),revstr.end());
//     if(str!=revstr){
//         return false;
//     }
//     return true;
// }
//  int main(){
   
//          string str;
//      int n=str.length();
//      cout<<"Enter the string: ";
//      cin>>str;
     
//     if(ispalindrome(str,n)==true){
//         cout<<"true";
//     }else{
//         cout<<"False";
//     }
    
//      return 0;
//  }