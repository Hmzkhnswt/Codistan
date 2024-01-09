#include<iostream>
using namespace std;

void vowels_count(string &str){
	int a=0 , e=0, i=0, o=0, u=0;
	for(int x=0; x<str.length(); x++){
		char character = tolower(str[x]);
		if(character == 'a'){
			a++;
		}
		else if(character == 'e'){
			e++;
		}
		else if(character == 'i'){
			i++;
		}
		else if(character == 'o'){
			o++;
		}
		else if(character == 'u'){
			u++;
		}
	}
	cout<<"a:-> "<<a<<endl;
	cout<<"e:-> "<<e<<endl;
	cout<<"i:-> "<<i<<endl;
	cout<<"o:-> "<<o<<endl;
	cout<<"u:-> "<<u<<endl;
	
}

int main(){
	
	string input = "";
	cout<<"Enter a String: ";
	getline(cin, input);
	
	vowels_count(input);
	
	return 0;	
}
