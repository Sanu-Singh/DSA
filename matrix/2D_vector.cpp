#include<bits/stdc++.h>
using namespace std;
int main(){

vector<vector<int>>v{{1,2,3},{4,5,6},{7,8,9}};

for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[i].size(); j++){
        cout<<v[i][j]<< " ";
    }
    cout<<endl;
}

    return 0;
}


// vector<vector<int>>v its  a 2D vector
//v.size() -> how many rows are present
//v[i].size()->number of item present in ith row
