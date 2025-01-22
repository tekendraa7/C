#include <stdio.h>
#include <string.h>

// Define a structure to hold student information
struct Student {
    int id;
    char name[50];
    float percentage;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Initialize the members of the structure
    student1.id = 1;
    strcpy(student1.name, "John Doe");
    student1.percentage = 85.5;

    // Print the details of the student
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Percentage: %.2f\n", student1.percentage);

    return 0;
}