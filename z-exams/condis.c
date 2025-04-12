// This program takes two integers as input and checks if one is even and the other is odd.
// If so, it adds them; otherwise, it multiplies them.
#include <stdio.h>

int main() {
    int num1, num2, result;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if ((num1 % 2 == 0 && num2 % 2 != 0) || (num1 % 2 != 0 && num2 % 2 == 0))
        result = num1 + num2;
    else
        result = num1 * num2;

    printf("Result: %d\n", result);
    return 0;
}
