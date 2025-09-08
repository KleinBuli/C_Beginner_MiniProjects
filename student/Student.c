#include <stdio.h>


// Typedef for Student: simplifies writing 'struct Student'
typedef struct {
    char name[50];   // Student's name, max 49 characters + '\0'
    int age;         // Student's age
    float gpa;       // Student's average grade (GPA)
} Student;

int main(void) {

    Student student;  // Create a variable of type Student

    // Read the student's name (including spaces)
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);

    // Read the student's age
    printf("Enter age: ");
    scanf("%d", &student.age);

    // Read the student's average grade (GPA)
    printf("Enter average: ");
    scanf("%f", &student.gpa);

    // Print the student's information
    printf("\nStudent info:\n");
    printf("Name: %s", student.name);  // fgets keeps the newline character
    printf("Age: %d\n", student.age);
    printf("Average: %.2f\n", student.gpa);

    return 0;
}