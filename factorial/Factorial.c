#include <stdio.h>

int factorialIterative(int n);
int factorialRecursive(int n);

// Iterative version of factorial
int factorialIterative(int n) {
    if (n < 0) return -1;   // Return -1 if input is negative (error case)

    int result = 1;
    // Multiply numbers from 1 up to n
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result; // Return the result
}

// Recursive version of factorial
int factorialRecursive(int n) {
    if (n < 0) return -1;                 // Error case for negative input
    if (n == 0 || n == 1) return 1;       // Base case: factorial(0) = factorial(1) = 1

    // Recursive call: n! = n * (n-1)!
    return n * factorialRecursive(n - 1);
}

int main(void) {
    const int num = 5; // Example number

    // Print results for both implementations
    printf("Recursive: %d \n", factorialRecursive(num));
    printf("Iterative: %d", factorialIterative(num));

    return 0;
}
