#include<stdio.h>

 int main(){
 double a,b,c;         /* double data type can handle both int and float digits */
 printf("Enter a number : ");
 scanf("%lf",&a);      /* %lf is a format specifier for double data type */
 printf("Enter second number : ");
 scanf("%lf",&b);
 c=a+b;
 printf("The sum of %lf and %lf is %lf",a,b,c); 

 /* %g format specifier can also be used instead of %lf
  to reamone unnecessary zeros after decimal */

/*
for the operation of both int & float digits simultaneously, 
we can use float data type & %f as format specifier */

}