#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to skip whitespace

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}