// This program demonstrates the use of structures in C
#include <stdio.h>

// Structure declaration
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Structure variable initialization
    struct Student s1 = {101, "Alice", 89.5};

    // Accessing structure members
    printf("Student ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}