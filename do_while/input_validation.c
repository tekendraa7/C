#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &num);
        if (num < 1 || num > 10) {
            printf("Invalid input! Try again.\n");
        }
    } while (num < 1 || num > 10); // Repeat until valid

    printf("You entered: %d\n", num);
    return 0;
}