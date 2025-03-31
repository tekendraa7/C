#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, disc, root1, root2, real, img;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc == 0) {
        printf("Roots are real and same\n");
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %f\n", root1);
    }
    else if (disc > 0) {
        printf("Roots are real and different\n");
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("Root 1 = %f Root 2 =%f \n", root1, root2);
    }
    else {
        printf("Roots are complex and different\n");
        real = -b / (2 * a);
        img = sqrt(-disc) / (2 * a);
        printf("Root 1 = %f + %fi\n", real, img);
        printf("Root 2 = %f - %fi\n", real, img);
    }
    return 0;
}