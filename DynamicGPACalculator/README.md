# 1. Dynamic GPA Calculator (with "Add Grade")

## Concept / Requirement:

Allow the user to enter an initial number of grades.

Dynamically calculate the GPA (average of grades).

Let the user add more grades after the initial input.

Use dynamic memory allocation (malloc / realloc) to store grades.

Validate user input (grades ≥ 0, number of grades > 0).

## Example Input/Output:
```pgsql
Enter the number of grades: 3
#1 grade: 2.0
#2 grade: 1.7
#3 grade: 3.0
Your GPA is: 2.23

Do you want to add a grade (Y / N)? Y
#4 grade: 1.3
Your GPA is: 2.00 ```
