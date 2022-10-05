#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
                                    //this method not work for large numbers beacuse numbers of digits increases
int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
cout<<factorial(n);
    
    return 0;
}