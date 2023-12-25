#include<iostream>
using namespace std;

int main() {
    int factorial = 1;
    int num;
    
    cout << "Enter Number: ";
    cin >> num;
    
    for (int i = num; i > 1; i--) {
        factorial = factorial * i;
    }
    
    cout << "The factorial of " << num << " is: " << factorial;
    
    return 0;
}

