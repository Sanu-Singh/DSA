

// Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// Output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}

//Here orders not matter


// input={1,2,3,-4,-1,4}
// output=-4,1,-1,2,3,4

/*
#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
   int i=-1;
  int j=n;
  while(i<j){
      while(i<=n-1 && arr[i]>0)
          i++;
      
      while(j>=0 && arr[j]<0)
          j--;
      
      if(i<j)
          swap(arr[i],arr[j]);
  } 
   if (i == 0 || i == n)
        return;
    int k=0;
    while(k<n && i<n){
        swap(arr[k],arr[i]);
            k=k+2;
            i++;
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={1,2,3,-4,-1,4};
int n=sizeof(arr)/sizeof(arr[0]);
rearrange(arr,n);
return 0;
} */



//here for odrer matter
// Input:  arr[] = {1, 2, 3, -4, -1, 4}
// Output: arr[] = {-4, 1, -1, 2, 3, 4}

#include<bits/stdc++.h>
using namespace std;
void rightrotate(int arr[], int n, int from, int to){
    int temp=arr[to];
    for(int i=to; i>from; i--){
        arr[i]=arr[i-1];
        
    }
    arr[from]=temp;
    
}

void rearrange(int arr[], int n){
    int wrongindex=-1;
    for(int i=0; i<n; i++){
     if(wrongindex >=0){
        if(((arr[wrongindex]>=0)&&(arr[i]<0)) || ((arr[wrongindex]<0) && (arr[i]>=0))){
            rightrotate(arr,n,wrongindex,i);

            if(i-wrongindex >=2){
                wrongindex+=2;
            }else{
                wrongindex=-1;
            }
        }
     }
    
    if(wrongindex==-1){
        if((arr[i]<0) && (i%2==1) || (arr[i]>=0)&& i%2==0){
            wrongindex=i;
        }
    }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
int arr[]={1,2,3,-4,-1,4};
int n=sizeof(arr)/sizeof(arr[0]);
rearrange(arr,n);
return 0;
}