/* program to implement the distrubution sort*/

#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum value in the array
int findMax(int arr[], int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Function to perform distribution sort
void distributionSort(int arr[], int n) {
    int max_val = findMax(arr, n);
    int* count = (int*)calloc(max_val + 1, sizeof(int));

    // Count occurrences of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Fill the original array with sorted elements
    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }

    free(count);
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    distributionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
