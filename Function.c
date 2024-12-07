#include<stdio.h>
void printHello();

int main() {
     printHello(); //function call
     printHello();
     printf("Hello World");
    return 0;
}

//function definition
void printHello() {
    printf("Hello!\n");
}