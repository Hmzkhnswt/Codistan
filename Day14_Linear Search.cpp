#include <iostream>
using namespace std;

int linearSearch(int size, int num, int array[]){
	for(int i=0; i<size; i++){
		if(array[i] == num){
			cout<<"The Number "<<num<<" has been found at index "<<i;
			break;
		}
	}
	return 0;
}

int main(){
	
	int size;
	cout<<"Enter size of an array: ";
	cin>>size;
	int num;
	cout<<"Enter number you want to find: ";
	cin>>num;
	int arr[size];
	cout<<"Enter elements: ";
	for(int j=0; j<size; j++){
		cin>>arr[j];
	}
	
//	function call linearSearch
	linearSearch(size, num, arr);
	
	
	return 0;
}
