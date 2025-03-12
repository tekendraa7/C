#include<stdio.h>
int f(); // Function prototype
int g(); // Function prototype
int h(); // Function prototype
int f(){ // Function definition
    printf("1");
    g();
    printf("2");
}
int g(){ // Function definition
    printf("3");
    h();
    printf("4");
}
int h(){ // Function definition
    printf("5");
}
int main(){ // Main function
    f();
    g();
    h();
    return 0; 
}
