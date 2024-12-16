#include<stdio.h>
int main() {
  int age = 21;
  int *ptr = &age;
  int _age = *ptr;
  //address
  printf("%p\n", &age);
    return 0;
}