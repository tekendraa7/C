#include<stdio.h>
#include<string.h>
// This program demonstrates how to write a string to a file character by character using fputc() function.
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