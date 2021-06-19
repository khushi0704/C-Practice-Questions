#include <iostream>
using namespace std;
// sorting algorithm
// selection sort 
int main() {
	// finding minimun element in an unsorted array and swap it with the beginning element
	int n=5;
	int arr[n]={34,22,56,35,67,34};
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}