#include <stdio.h>

float enterGrade(int count);
int enterAmount();

// Function to read a single grade from the user
float enterGrade(int count) {
    float grade = 0;
    while (1) { // repeat until valid input
        printf("#%d grade: ", count);

        // scanf tries to read a float (%f).
        // If it succeeds AND the value is >= 0, break the loop.
        if (scanf("%f", &grade) == 1 && grade >= 0) break;

        // If input is invalid, clear the input buffer
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        // Print error message
        fprintf(stderr, "Please enter a valid grade (>= 0)!\n");
    }
    return grade; // return the valid grade
}

// Function to read the number of grades
int enterAmount() {
    int amount = 0;
    while (1) { // repeat until valid input
        printf("Enter the number of grades: ");

        // scanf tries to read an integer (%d).
        // If it succeeds AND the value is > 0, break the loop.
        if (scanf("%d", &amount) == 1 && amount > 0) break;

        // If input is invalid, clear the input buffer
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        // Print error message
        fprintf(stderr, "Please enter a valid number greater than 0!\n");
    }
    return amount; // return the valid amount
}

int main(void) {
    // Ask user how many grades to enter
    const int amount = enterAmount();

    // Create an array with that many grades
    float grades[amount];

    // Fill the array with user input
    for (int i = 0; i < amount; i++) {
        grades[i] = enterGrade(i + 1);
    }

    // Calculate the sum of all grades
    float sum = 0;
    for (int i = 0; i < amount; i++) {
        sum += grades[i];
    }

    // Calculate the average (GPA)
    const float gpa = sum / amount;

    // Print the result with 2 decimal places
    printf("Your GPA is: %.2f\n", gpa);

    return 0; // End of program
}