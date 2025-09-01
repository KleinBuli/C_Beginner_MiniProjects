# Input Fullname / Input with Spaces

This beginner-friendly C program demonstrates how to read user input that includes spaces. Unlike scanf, which stops reading at the first space, this program allows the user to enter full names, sentences, or phrases.

## Concept / Requirement

Ask the user to enter a string that may include spaces (e.g., full name).

Use fgets to read the input safely, including spaces.

Remove the newline character automatically added by fgets.

Validate that the input is not empty.

Display the entered string back to the user.

Use a function to structure the code.

## Example Input / Output

```pgsql
Enter your full name: John Doe
Hello, John Doe!
```
```pgsql
Enter your full name:
Please enter a valid name!
Enter your full name: Alice Smith
Hello, Alice Smith!
```