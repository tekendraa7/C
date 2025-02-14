#include <stdio.h>
 int main() {
    char ch = 'a';
    char str[20] = "I Love Nepal";
    printf("case1:value of ch = %c",ch);
    printf("\n case2: value of ch  = %10c",ch);
    printf("\n case3: value of ch = %-10c",ch);
    printf("\n case4: value of str = %s",str);
    printf("\n case5: value of str = %18s",str);
    printf("\n case6: value of str = %-15.8s",str);
    return 0;
 }