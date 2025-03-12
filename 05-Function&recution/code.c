#include<stdio.h>
int tekendra(int, int);
int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum = tekendra(a, b);
    printf("Sum = %d",sum);
}
int tekendra(int x, int y)
{
    int result;
    result = x + y;
    return result;
}