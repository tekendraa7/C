#include<stdio.h>
#include<math.h>
int main() {
    double a, b, c, d, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b + sqrt(d)/(2 * a));
        root2 = (-b - sqrt(d)/(2 * a));
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
    }
    else {
        printf("Roots are imaginary\n");
    }
    return 0;
}