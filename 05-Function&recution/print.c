#include<stdio.h>
int main()
{
    float a=7.4893578;
    int b=9879;
    printf("a=%3f and b=%-6d in first line\n",a,b);
    printf("a=%-7.3f and b=%07d in second line\n",a,b);
    printf("a=%0.2f and b=%3d in third line\n",a,b);
}