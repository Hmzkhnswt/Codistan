#include<iostream>
using namespace std;

// Binary search function
int binarySearch(int array[], int num, int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == num) {
            return mid; // Return the index where the number is found
        } else if (array[mid] < num) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if the number is not found
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    
    cout << "Enter elements in array: " << endl;
    for (int j = 0; j < size; j++) {
        cin >> array[j];
    }

    int number;
    cout << "Enter a number to search: ";
    cin >> number;

    int result = binarySearch(array, number, size);

    if (result != -1) {
        cout << "Number found at index " << result << endl;
    } else {
        cout << "Number not found!" << endl;
    }

    return 0;
}

