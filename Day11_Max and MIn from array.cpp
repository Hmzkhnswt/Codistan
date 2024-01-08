#include<iostream>
using namespace std; 

void maxmin(int size, int array[]){
	int max, min;
	for(int i=0;i<size; i++){
		if(array[i] > max){
			 max = array[i];
		}
		if(array[i] < min){
			 min = array[i];
		}
	}
	cout<<"Max: "<<max<<"& Min :"<<min;

}

int main(){
	
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int array[n];
	cout<<"Enter an array of size "<<endl;
	for(int i=0; i<n; i++){
		cin>>array[i];
	}
	
	maxmin(n, array);
	
	return 0;
}
