// C program to demonstrate basic details about pointers

#include <stdio.h> 

int main() {
    int var = 10; // Declare an integer variable
    int *ptr; // Declare a pointer to an integer

    ptr = &var; // Assign the address of var to the pointer

    // Display the value of var
    printf("Value of var: %d\n", var);

    // Display the address of var
    printf("Address of var: %p\n", (void*)&var);

    // Display the value stored in the pointer (which is the address of var)
    printf("Value stored in ptr (address of var): %p\n", (void*)ptr);

    // Display the value pointed to by the pointer (which is the value of var)
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modify the value of var using the pointer
    *ptr = 20;

    // Display the new value of var
    printf("New value of var: %d\n", var);

    return 0; // Return 0 to indicate successful completion
}