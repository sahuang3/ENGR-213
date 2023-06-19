#include<stdio.h>
// fscanf, fgets, fgetc

int main(){

    FILE* fptr;
    fptr = fopen( "./program.txt", "w+" );
    fputs("We are in 2022", fptr);

    // 3 string buffers, 1 int buffer
    char str1[10], str2[10], str3[10];
    int year;
    
    // Sets the file position to the beginning of the file
    rewind(fptr);

    // fscanf(file ptr, format specifiers, variables)
    fscanf(fptr, "%s %s %s %d", str1, str2, str3, &year);
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%d|\n", year);
    fclose(fptr);

    return 0;
}