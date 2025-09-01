#include <stdio.h>

void bubbleSort(int arr[], int size);

void swap(int *a, int *b) {
    int temp = *a;   // Store the value of a temporarily
    *a = *b;         // Copy the value of b into a
    *b = temp;       // Copy the original value of a into b
}


// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int size) {
    // Loop through the array twice
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main(void) {

    int arr[] = {5, 2, 7, 659, 236, 93, 20, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
}