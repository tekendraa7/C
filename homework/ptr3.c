// C program to read 5 numbers using pointer
#include<stdio.h>
int main(){
   int  i;
   int arr[10];
   int *ptr;
   ptr=arr;
   printf("Enter 5 Elements ");
   for(i=0;i<5;i++)
   { 
   	  scanf("%d",ptr);
		 ptr++; 
   }
   ptr=arr;
    printf("Entered Numbers:\n");
    for(i=0;i<5;i++)
   { 
   	  printf("%d\n",*ptr);
		 ptr++; 
   }
}