#include <iostream>
using namespace std;

// Function to insert an element into the sorted part of the array
void insert(int arr[], int n) {
    // Base case: If the array has only one element, it is already sorted
    if (n <= 1) {
        return;
    }

    // Sort the first n-1 elements
    insert(arr, n - 1);

    // Insert the nth element into the sorted array
    int last = arr[n - 1];
    int j = n - 2;

    // Shift elements of the sorted segment of the array to the right
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Place the last element at its correct position
    arr[j +1] = last;
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 25, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insert(arr, n);
    printArray(arr, n);

    return 0;
}
