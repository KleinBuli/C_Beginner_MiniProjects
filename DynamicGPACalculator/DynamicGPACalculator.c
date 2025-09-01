#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function prototypes
float enterGrade(int count);           // Reads a single grade from the user
int enterAmount();                     // Reads the initial number of grades
bool addAnotherGrade();                // Asks the user if they want to add another grade (Y/N)
float gpa(float grades[], int amount); // Calculates the average (GPA) of all grades

// Calculate GPA (average) of grades
float gpa(float grades[], int amount) {
    float sum = 0;
    for (int i = 0; i < amount; i++) {
        sum += grades[i]; // Add each grade to the sum
    }
    return sum / amount; // Divide sum by number of grades
}

// Ask the user if they want to add another grade
bool addAnotherGrade() {
    char choice;
    while (1) { // Repeat until valid input
        printf("Do you want to add a grade (Y / N)? ");

        if (scanf(" %c", &choice) == 1) {
            choice = toupper((unsigned char)choice); // Convert to uppercase so 'y' works too

            if (choice == 'Y') return true;  // User wants to add a grade
            if (choice == 'N') return false; // User does not want to add
        }

        // Clear input buffer if invalid
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        printf("Please enter Y or N!\n"); // Ask again
    }
}

// Read a single grade from the user
float enterGrade(int count) {
    float grade = 0;
    while (1) { // Repeat until valid input
        printf("#%d grade: ", count);

        if (scanf("%f", &grade) == 1 && grade >= 0) break; // Accept float >= 0

        // Clear input buffer on invalid input
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        fprintf(stderr, "Please enter a valid grade (>= 0)!\n");
    }
    return grade; // Return the entered grade
}

// Read the initial number of grades from the user
int enterAmount() {
    int amount = 0;
    while (1) {
        printf("Enter the number of grades: ");

        if (scanf("%d", &amount) == 1 && amount > 0) break; // Must be positive

        // Clear input buffer if invalid
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        fprintf(stderr, "Please enter a valid number greater than 0!\n");
    }
    return amount; // Return the valid number
}

int main(void) {
    int amount = enterAmount(); // Get initial number of grades

    // Allocate memory for the grades dynamically
    float* grades = malloc(amount * sizeof(float));
    if (!grades) { // Check allocation
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // Enter the initial grades
    for (int i = 0; i < amount; i++) {
        grades[i] = enterGrade(i + 1);
    }

    // Allow the user to add more grades
    while (addAnotherGrade()) {
        amount++; // Increase total number of grades

        // Resize the array with realloc
        float* temp = realloc(grades, amount * sizeof(float));
        if (!temp) { // Check if reallocation succeeded
            fprintf(stderr, "Memory reallocation failed!\n");
            free(grades); // Free old memory
            return 1;
        }
        grades = temp;

        // Enter the new grade and store it at the end
        grades[amount - 1] = enterGrade(amount);
    }

    // Calculate and print the final GPA
    float gpaValue = gpa(grades, amount);
    printf("Your GPA is: %.2f\n", gpaValue);

    // Free dynamically allocated memory
    free(grades);
    grades = NULL;

    return 0; // End program
}