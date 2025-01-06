#include <stdio.h>

int main() {
 float p, t, r;
    float si;
    printf("Enter principal amount: \n");
    scanf("%f", &p);
    printf("Enter time: \n");
    scanf("%f", &t);
    printf("Enter rate: \n");
    scanf("%f", &r);
    si = (p * t * r) / 100;
    printf("Simple Interest = %f\n", si);
    return 0;
}