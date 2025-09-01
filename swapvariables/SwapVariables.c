#include <stdio.h>

// Function declaration: swap takes two integer pointers
void swap(int* a, int* b);

// Function definition: swaps the values of two integers via pointers
void swap(int *a, int *b) {
    int temp = *a;   // store the value at address a
    *a = *b;         // copy the value at address b into a
    *b = temp;       // copy the old value of a into b
}

int main(void) {
    int x = 5;
    int y = 10;

    // Print values and their memory locations before swapping
    printf("Variable x (%d) is located at location: %p\n", x, &x);
    printf("Variable y (%d) is located at location: %p\n", y, &y);

    // Call swap and pass the addresses of x and y
    swap(&x, &y);

    // Print values and their memory locations after swapping
    printf("Variable x (%d) is located at location: %p\n", x, &x);
    printf("Variable y (%d) is located at location: %p\n", y, &y);

    return 0;
}