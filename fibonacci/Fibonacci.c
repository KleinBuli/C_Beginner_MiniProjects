#include <stdio.h>

int fibonacciRecursive(int n);
int fibonacciIterative(int n);

int fibonacciIterative(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int prev1 = 0;  // fib(0)
    int prev2 = 1;  // fib(1)
    int result = 0;

    // Loop from 2 up to n
    for (int i = 2; i <= n; i++) {
        result = prev1 + prev2; // fib(i) = fib(i-1) + fib(i-2)
        prev1 = prev2;          // Move forward in the sequence
        prev2 = result;
    }

    return result; // Return fib(n)
}

int fibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}

int main(void) {
    const int fifth = fibonacciRecursive(5); // = fibonacciIterative(5);
    printf("%d\n", fifth);
    return 0;
}