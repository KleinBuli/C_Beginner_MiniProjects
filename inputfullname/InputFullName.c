#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // Maximum length of input string

// Function to read a string with spaces
void enterName(char* name, int size) {
    while (1) {
        printf("Enter your full name: ");

        // Read the whole line including spaces
        if (fgets(name, size, stdin) != NULL) {
            // Remove newline character at the end, if present
            size_t len = strlen(name);
            if (len > 0 && name[len - 1] == '\n') {
                name[len - 1] = '\0';
            }

            // Check if input is not empty
            if (len > 1) break;
        }

        printf("Please enter a valid name!\n");
    }
}

int main(void) {
    char name[MAX_LENGTH];

    enterName(name, MAX_LENGTH);

    printf("Hello, %s!\n", name);

    return 0;
}