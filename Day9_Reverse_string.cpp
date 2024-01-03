#include<iostream>
using namespace std;

string reverse_string(string str) {
    int len = str.length();
    string reversed = "";
    
    for(int i = len - 1; i >= 0; i--) {
        reversed += str[i];
    }
    
    return reversed;
}

int main() {
    string str = "";
    cout << "Enter a string: ";
    getline(cin, str);
    
    string reversed_str = reverse_string(str);
    cout << "The reversed string is: " << reversed_str << endl;
    
    return 0;
}

