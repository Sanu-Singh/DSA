// insertion
#include <iostream>
using namespace std;
 
void printArray(int arr[],int N)
{
	for(int i=0; i<N; i++){
	
	cout<<arr[i]<<' ';
 }
 cout<<endl;
}

int indInsertion(int arr[],int size, int element ,int capacity,int index)
{
	if(size>=capacity){
	cout<<"Overflow";
}

for(int i=size-1; i>=index; i--)
{
	arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
}

int main(){
	
	int arr[100]={7,8,12,27,88};
	int size=5, element =45, index=1;
	printArray(arr ,5);
	indInsertion(arr ,size,element,100,index);
	size+=1;
	printArray(arr,size);
	return 0;
}
