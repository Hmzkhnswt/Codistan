#include<iostream>
using namespace std;

void reverse_string(string str){
    int len_str = str.length();

    for(int i = len_str - 1; i >= 0; i--){
        cout << str[i];
    }
    cout << endl; 
}

int main(){
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
	cout<<"Reversed String is:-->  ";
    reverse_string(str);

    return 0;
}

