#include <stdio.h>

int main() {
// to measure the volume of cylinder
int radius, height;
printf("Enter the radius of the cylinder:");
scanf("%d", &radius);
printf("Enter the height of the cylinder:");
scanf("%d", &height);
printf("Volume of the cylinder = %f\n", 3.14 * radius * radius * height);
    return 0;
}