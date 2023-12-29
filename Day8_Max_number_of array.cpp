#include<iostream>
using namespace std;

int max_number(int arr[], int size){
    int maxnum = arr[0]; 
    for(int i = 1; i < size; i++){ 
        if(arr[i] > maxnum){
            maxnum = arr[i];
        }
    }
    return maxnum;
}

int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamic memory allocation

    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "The array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    int maxNumber = max_number(arr, size);
    cout << "\nThe largest number of the array is: " << maxNumber;

    delete[] arr; // Free the allocated memory
    return 0;
    
}

