#include <stdio.h>

  int main(){
    int leangth, breadth, height;
    printf("Enter the leangth of the cube or cuboid:");
    scanf("%d", &leangth);
    printf("Enter the breadth of the cube or cuboid:");
    scanf("%d", &breadth);
    printf("Enter the height of the cube or cuboid:");
    scanf("%d", &height);
    printf("Volume of the cube or cuboid = %d\n", leangth * breadth * height);
    return 0;
  }