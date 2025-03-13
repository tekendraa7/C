// Sum numbers entered by the user until -1 is entered
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter numbers to sum. Enter -1 to stop.\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num != -1) {
            sum += num;
        }
    } while (num != -1); // Stop when -1 is entered

    printf("Total sum: %d\n", sum);
    return 0;
}