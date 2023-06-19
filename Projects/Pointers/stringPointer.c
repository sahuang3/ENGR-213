#include<stdio.h>

int main(){

    char *ptr;
    char string[] = "Intro to C programming";
    ptr = string;
    ptr +=6;
    printf("%s \n", ptr);
    
    return 0;
}