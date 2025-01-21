#include<stdio.h>
void printHello(); //function prototype&declaration

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