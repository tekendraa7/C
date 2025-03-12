#include<stdio.h>
int  swap(int, int); // Function declaration
int main()
{
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b); // Call by value
    printf("After swapping: a = %d, b = %d\n", a, b); 
}
int swap(int x, int y) // Function definition
{
    int temp; // Swapping logic
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d, y = %d\n", x, y); 
}