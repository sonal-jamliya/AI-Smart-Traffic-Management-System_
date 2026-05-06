#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the target if found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};  // Array to search in
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int target =  34; // Element to search for

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}

