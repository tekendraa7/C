// C program to demonstrate different types of operators

#include <stdio.h>

int main() {
    int a = 10, b = 20, result;

    // Arithmetic Operators
    result = a + b; // Addition
    printf("Addition: %d + %d = %d\n", a, b, result);

    result = a - b; // Subtraction
    printf("Subtraction: %d - %d = %d\n", a, b, result);

    result = a * b; // Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, result);

    result = b / a; // Division
    printf("Division: %d / %d = %d\n", b, a, result);

    result = b % a; // Modulus
    printf("Modulus: %d %% %d = %d\n", b, a, result);

    // Relational Operators
    printf("Relational Operators:\n");
    printf("%d > %d = %d\n", a, b, a > b); // Greater than
    printf("%d < %d = %d\n", a, b, a < b); // Less than
    printf("%d == %d = %d\n", a, b, a == b); // Equal to
    printf("%d != %d = %d\n", a, b, a != b); // Not equal to
    printf("%d >= %d = %d\n", a, b, a >= b); // Greater than or equal to
    printf("%d <= %d = %d\n", a, b, a <= b); // Less than or equal to

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(%d > %d) && (%d < %d) = %d\n", a, b, a, b, (a > b) && (a < b)); // Logical AND
    printf("(%d > %d) || (%d < %d) = %d\n", a, b, a, b, (a > b) || (a < b)); // Logical OR
    printf("!(%d > %d) = %d\n", a, b, !(a > b)); // Logical NOT

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("%d & %d = %d\n", a, b, a & b); // Bitwise AND
    printf("%d | %d = %d\n", a, b, a | b); // Bitwise OR
    printf("%d ^ %d = %d\n", a, b, a ^ b); // Bitwise XOR
    printf("~%d = %d\n", a, ~a); // Bitwise NOT
    printf("%d << 1 = %d\n", a, a << 1); // Left shift
    printf("%d >> 1 = %d\n", a, a >> 1); // Right shift

    // Assignment Operators
    printf("Assignment Operators:\n");
    result = a; // Assign
    printf("result = %d\n", result);
    result += a; // Add and assign
    printf("result += %d -> %d\n", a, result);
    result -= a; // Subtract and assign
    printf("result -= %d -> %d\n", a, result);
    result *= a; // Multiply and assign
    printf("result *= %d -> %d\n", a, result);
    result /= a; // Divide and assign
    printf("result /= %d -> %d\n", a, result);
    result %= a; // Modulus and assign
    printf("result %%= %d -> %d\n", a, result);

    return 0;
}