#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Init srand ONCE
    srand(time(NULL));

    int flips; // Number of coin flips
    while (1) { // Repeat until valid input
        printf("How many times would you like to flip the coin? ");

        // Read user input and check if it's a positive number (max 100,000)
        if (scanf("%d", &flips) == 1 && flips > 0 && flips <= 100000) break;

        // Clear input buffer if invalid input
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        printf("Invalid input, please enter a positive number!\n");
    }

    int heads = 0; // Counter for heads
    int tails = 0; // Counter for tails

    // Perform the coin flips
    for (int i = 0; i < flips; i++) {
        const int chance = rand() % 2; // Generate 0 or 1 randomly

        if (chance == 0)
            heads++; // Count as heads
        else
            tails++; // Count as tails
    }

    // Print the results
    printf("Tails: %d\nHeads: %d \n", tails, heads);

    return 0;
}