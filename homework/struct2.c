/* C program to demonstrate the use of structures
 to store and display employee details.
 */
#include <stdio.h>

// Structure definition
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3]; // Array of structures

    // Taking input
    for (int i = 0; i < 3; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); // Read string with space
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Displaying output
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}
