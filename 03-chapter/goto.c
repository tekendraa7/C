#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (enter 0 to exit): ");
    scanf("%d", &num);

    if (num == 0) {
        goto end;
    }

    printf("You entered: %d\n", num);

    // Using goto to jump to the end of the program
    goto start;

start:
    printf("Enter another number (enter 0 to exit): ");
    scanf("%d", &num);

    if (num != 0) {
        printf("You entered: %d\n", num);
        goto start;
    }

end:
    printf("Exiting the program.\n");

    return 0;
}