#include<iostream>
using namespace std;

int alphabets_count(string str){
	for(int i=0; i<str.length(); i++){
		cout<<i<<"->"<<str[i];
	}
	return 0;		
	}
	

int main(){
	
	string str;
	cout<<"Enter a string: ";
	getline(cin, str);
	
	char characters = alphabets_count(str);
	cout<<" || "<<characters<<endl;
	
	
	return 0;
}
