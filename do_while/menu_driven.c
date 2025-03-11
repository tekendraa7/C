#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Print 'Hello'\n");
        printf("2. Print 'World'\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("World\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3); // Loop until user selects exit

    return 0;
}