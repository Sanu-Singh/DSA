// O(n*2)
#include <bits/stdc++.h>

using namespace std;

/* Searches the element x in mat[][]. If the
element is found, then prints its position
and returns true, otherwise prints "not found"
and returns false */
int search(int mat[4][4], int n, int x)
{
    if (n == 0)
        return -1;

    // traverse through the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            // if the element is found
            if (mat[i][j] == x) {
                cout<< "Element found at (" << i << ", "
                     << j << ")\n";
                return 1;
            }
    }

    cout<< "Element not found";
    return 0;
}

// Driver code
int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    search(mat, 4, 29);

    return 0;
}








//optimixed o(n)
// #include<bits/stdc++.h>
// using namespace std;
// #define m 4 

// int search(int arr[m][m], int n,int k){
//   int i=0; 
//   int j=n-1;
//   bool flag=false;
//   while(i<n && j>=0){
//       if(arr[i][j]==k){
//           cout<<"Element found at: "<<i<<j<<endl;
//           flag=true;
//       }
//       if(arr[i][j]>k){
//           j--;
//       }else{
//           i++;
//       }
//   }
//   if(flag==false)
//  cout<<"Element not found";
//  return  0;
// }


//  int main(){
//     int n=4;
//      int arr[m][m]={{1,2,3,4},
//                     {5,6,7,8},
//                    {9,10,11,12},
//                   {13,14,15,16}};
//     int k=10;              
//    cout<<  search(arr,n,k);
//      return 0;
//  }
 