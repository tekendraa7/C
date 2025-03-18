/* to print ASCII values and characters from 48 to 
55 and 65 to 70. Use continue statement for restricting the 
ASCII values and characters from 56 to 64.*/
#include <stdio.h>

int main() {
    int i;

    printf("ASCII values and characters from 48 to 55 and 65 to 70:\n");

    for (i = 48; i <= 70; i++) {
        if (i > 55 && i < 65) {
            continue; // Skip ASCII values from 56 to 64
        }
        printf("ASCII value: %d, Character: %c\n", i, i);
    }

    return 0;
}