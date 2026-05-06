#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Find the middle element

        // Check if the target is at the middle
        if (arr[mid] == target) {
            return mid;  // Return the index if the element is found
        }

        // If target is smaller than mid, discard the right half
        if (arr[mid] > target) {
            high = mid - 1;
        }
        // If target is larger than mid, discard the left half
        else {
            low = mid + 1;
        }
    }

    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[] = {2, 3, 12, 34, 54};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int target = 34;  // Element to search for

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

