#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student student;
    FILE *file;

    // Open file in write mode
    file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input student information
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter student age: ");
    scanf("%d", &student.age);
    printf("Enter student GPA: ");
    scanf("%f", &student.gpa);

    // Write student information to file
    fprintf(file, "Name: %sAge: %d\nGPA: %.2f\n\n", student.name, student.age, student.gpa);

    // Close the file
    fclose(file);

    printf("Student information saved to file.\n");

    return 0;
}