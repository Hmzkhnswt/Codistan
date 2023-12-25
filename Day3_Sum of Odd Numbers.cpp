#include<iostream>
using namespace std;
int main(){
	
//	If 'n' is 10, the sum of even numbers from 1 to 10 is: 2 + 4 + 6 + 8 + 10 = 30.
// Your program should take 'n' as input from the user and then output the sum of all even numbers between 1 and 'n'.
	
	int num;
	int sum = 0;
	cout<<"Enter Number: ";
	cin>>num;
	
	for(int i=2; i<=num; i+=2){
		if(num%2==0){
			sum += i;
		}
		else{
			continue;
		}
	}
	cout<<"The Sum is: "<<sum;
	
	return 0;
}

