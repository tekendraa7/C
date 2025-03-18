#include <stdio.h>

int main() {
    double num = 98520.2783;

    printf("%013.4f\n", num); // 0000098520.2783
    printf("%.2f\n", num);    // 98520.27
    printf("%-10.3f\n", num); // Left Justified
    printf("%10.3f\n", num);  // Right Justified

    return 0;
}
