#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter choice (1/2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = (temp * 9/5) + 32;
            printf("%.2f°C = %.2f°F\n", temp, converted);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32) * 5/9;
            printf("%.2f°F = %.2f°C\n", temp, converted);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}