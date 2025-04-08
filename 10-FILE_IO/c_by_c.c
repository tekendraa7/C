// C program to write a string to a file using fputc
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char s[] = "I Love File Handling in C";
    fp = fopen("file.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    for(int i = 0; i< strlen(s); i++){
        fputc(s[i], fp);
    }
    fclose(fp);
    return 0;
}