// implementation of stack

//method 1
// #include<bits/stdc++.h>
// using namespace std;
// #define n 5
// int st[n];
// int top=-1;
// void push(int x){
//     if(top==n-1){
//         cout<<"Overflow: ";
//     }
//     top++;
//     st[top]=x;
// }

// void print(){
//     if(top==1){
//         cout<<"Empty!";
//     }
//     while(top!=-1){
//         cout<<st[top]<<endl;
//         top--;
//     }
// }
// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     print();
//     return 0;
// }


//method 2
#include<bits/stdc++.h>
using namespace std;
void push(int st[], int n, int &top,int x){
if(top==n-1){
    cout<<"Overflow";
}
top++;
st[top]=x;
}
void print(int st[], int top){
if(top==-1){
    cout<<"Already Empty!";
}
while(top!=-1){
cout<<st[top]<<endl;
top--;
}
}
int main()
{ int n=4;
int st[n];
int top=-1;

push(st,n,top,10);
push(st,n,top,20);
push(st,n,top,30);
print(st,top);

    return 0;
}