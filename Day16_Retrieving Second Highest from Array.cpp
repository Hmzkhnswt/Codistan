#include<iostream>
using namespace std;

int second_highest_number(int size, int array[]){
	int first, second;
	for(int i=0; i<size; i++){
		if(array[i] > first){
			second = first;
			first = array[i];
		}
	}
	return second;
}

int main(){
	
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int array[size];
	cout<<"Enter Elements in array: "<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	
//	function call here
	cout<<second_highest_number(size, array);
	
	return 0;
}
