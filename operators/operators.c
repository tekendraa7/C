// C program to demonstrate different types of operators

#include <stdio.h>

int main() {
    int a = 20, b = 3, c = 5, d = 10;

    // Arithmetic operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Assignment operators
    int result = a;
    printf("result = a: %d\n", result);

    result += b;
    printf("result += b: %d\n", result);

    result -= c;
    printf("result -= c: %d\n", result);

    result *= d;
    printf("result *= d: %d\n", result);

    result /= b;
    printf("result /= b: %d\n", result);

    result %= c;
    printf("result %%= c: %d\n", result);

    // Logical operators
    int x = 1, y = 0;
    printf("x && y = %d\n", x && y);
    printf("x || y = %d\n", x || y);
    printf("!x = %d\n", !x);

    return 0;
}