#include<stdio.h>
int f();
int g();
int h();
int f(){
    printf("1");
    g();
    printf("2");
}
int g(){
    printf("3");
    h();
    printf("4");
}
int h(){
    printf("5");
}
int main(){
    f();
    g();
    h();
    return 0;
}
