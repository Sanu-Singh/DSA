// // Longest Substring with Distinct Characters
// #include<bits/stdc++.h>
// using namespace std;
// bool isdistinct(string str, int i, int j){
//     vector<bool>visited(26);
//     for(int k=i; k<=j; k++){
//         if(visited[str[k]-'a']==true){
//             return false;
//         }else{
//             visited[str[k]-'a']=true;
//         }
//     }
//     return true;
// }
// int distinct(string str){
//     int n=str.length();
//     int res=0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             if(isdistinct(str,i,j)){
//                 res=max(res,j-i+1);
//             }
//         }
//     }
//     return res;
// }

//  int main(){
// string str="geeeksforgeeks";
// cout << "The input string is " << str << endl;
// 	int len = distinct(str);
// 	cout << "The length of the longest non-repeating "
// 			"character substring is "
// 		<< len;
 
//      return 0;
//  }

 

 #include<bits/stdc++.h>
using namespace std;
int lengthofun(string str){
    set<char>st;
    int n=str.size();
    int res=0;
    int start=0;
    int end=0;
    while(start<n){
        if(st.find(str[start])==st.end()){
            res=max(res,start-end+1);
            st.insert(str[start]);
            start++;
        }else{
            st.erase(str[end]);
            end++;
        }
    }
    return res;
}

 int main(){
string str="geeeksforgeeks";
cout << "The input string is " << str << endl;
	int len = lengthofun(str);
	cout << "The length of the longest non-repeating "
			"character substring is "
		<< len;
 
     return 0;
 }