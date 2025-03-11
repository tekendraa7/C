#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "secure123";
    char input[50];
    int attempts = 0;
    int maxAttempts = 3;
    int valid = 0; // 0 = invalid, 1 = valid

    do {
        printf("Enter password (attempt %d/%d): ", attempts + 1, maxAttempts);
        scanf("%s", input);

        if (strcmp(input, correctPassword) == 0) {
            valid = 1;
            printf("Access granted!\n");
        } else {
            printf("Access denied.\n");
            attempts++;
        }
    } while (!valid && attempts < maxAttempts); // Stop on success or max attempts

    if (!valid) {
        printf("No attempts remaining. Account locked.\n");
    }
    return 0;
}