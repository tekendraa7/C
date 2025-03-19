#include <stdio.h>

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM is %d\n", lcm(num1, num2));
    return 0;
}