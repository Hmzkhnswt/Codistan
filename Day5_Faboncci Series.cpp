#include<iostream>
using namespace std;
int main(){
	
	int num;
	int first = 0, second = 1, next;
	cout<<"Enter Number: ";
	cin>>num;
	for(int i = 0; i<num; i++){
		if(num<=1){
			next = i;
		}
		else{
			next = first+second;
			first = second;
			second = next;
		}
		cout<<next<<", ";
	}
	
	return 0;
}
