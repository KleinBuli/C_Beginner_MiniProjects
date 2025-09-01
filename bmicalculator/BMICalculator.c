#include <stdio.h>

// Don't forget to declare functions!
float enterFloat(char* name);

float enterFloat(char* name) {
    float value;
    while (1) { // infinite loop until valid input

        printf("Please enter your %s: ", name);

        // scanf tries to read a float (%f).
        // If it succeeds (== 1) AND the value is > 0, we break the loop.
        if (scanf("%f", &value) == 1 && value > 0) break;

        // If input is invalid, we need to clear the input buffer
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        // Print an error message
        fprintf(stderr,"Please enter a valid %s!\n", name);
    }
    return value; // return the valid float
}

int main(void) {

    // Ask for weight (in kilograms)
    const float weight = enterFloat("weight in kg");

    // Ask for height (in meters)
    const float height = enterFloat("height in m");

    // Calculate BMI
    const float bmi = weight / (height * height);

    // Print the BMI with 2 decimal places
    printf("Your bmi: %.2f", bmi);

    return 0;
}