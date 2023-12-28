#include<iostream>
using namespace std;

bool is_palindrome(string str){
	int len = str.length();
	for(int i=0; i<=len; i++){
		if(str[i] != str[len-i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	
	string input;
	cout<<"Enter String: ";
	cin>>input;
	if(is_palindrome(input)){
		cout<<"Palindrome String";
	}
	else{
		cout<<"Not a Palindrome String";
	}
	return 0;
}
