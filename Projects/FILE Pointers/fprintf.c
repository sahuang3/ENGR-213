#include<stdio.h>

int main(){

    FILE* fptr;
    fptr = fopen("./program.txt", "w+");
    fprintf(fptr, "%s %s %s %d", "We", "are", "in", 2022);
    fclose(fptr);
    
    return 0;
}