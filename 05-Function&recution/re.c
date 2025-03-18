// C program to demonstrate recursion

#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int num ; // Declare an integer variable and initialize it
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Call the recursive function and store the result
    int result = factorial(num);

    // Display the result
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}