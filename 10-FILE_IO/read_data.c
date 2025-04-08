#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    // Read and print each character until EOF
    ch = fgetc(fp); // Read a character from the file
    while(!feof(fp)){ 
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}