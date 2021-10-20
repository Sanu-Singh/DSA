//Deletion
#include<iostream>
using namespace std;

void printArray(int arr[], int N){
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<' ';
		
	}
	cout<<endl;
}

void indDeletion(int arr[], int size, int index){
	for(int i=index; i<size-1; i++){
		arr[i]=arr[i+1];
		
	}
}

int main()
{
	int arr[100]={7,8,12,27,88};
	int size=5,  index=3;
	printArray(arr,size);
	indDeletion(arr,size,index);
	size -=1;
	printArray(arr,size);
	return 0;
}
