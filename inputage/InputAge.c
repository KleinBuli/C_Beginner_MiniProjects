#include <stdio.h>

int enterAge() {
    int age = 0;
    while (1) { // repeat until valid input
        printf("Enter your age:", age);

        // scanf tries to read an integer (%d).
        // If it succeeds, break the loop.
        if (scanf("%d", &age) == 1 && age >= 0) break;

        // If input is invalid, clear the input buffer
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        // Print error message
        fprintf(stderr, "Please enter a valid integer!\n");
    }
    return age; // return the valid grade
}

int main(void) {
    printf("You are %d years old. ", enterAge());
}