#include <iostream>
using namespace std;

// Function to find the index of the minimum element
int findMinIndex(int arr[], int start, int n) {
    int minIndex = start;
    for (int i = start + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to recursively sort the array using selection sort
void selectionSort(int arr[], int n, int index = 0) {
    // Base case: If the array is sorted or empty
    if (index == n) {
        return;
    }

    // Find the minimum element in the unsorted part of the array
    int minIndex = findMinIndex(arr, index, n);

    // Swap the found minimum element with the first element of the unsorted part
    if (minIndex != index) {
        swap(arr[minIndex], arr[index]);
    }

    // Recursively call selection sort for the remaining unsorted part
    selectionSort(arr, n, index + 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
