#include<bits/stdc++.h>
using namespace std;
int sumofdigits(int num){
int sum=0;
while(num/10!=0){
    sum+=num%10;
    num=num/10;
}
sum+=num%10;
return sum;






}

int main(){
int num=12345;
cout<<sumofdigits(num);
return 0;





}