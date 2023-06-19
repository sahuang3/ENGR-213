#include<stdio.h>

int main(){

    // File pointer
    FILE* fptr;

    /*  parameters: fopen(file, mode)
        Modes: a(append), w(overwrite), r(read), etc.
        if txt file doesn't exist, it creates a new txt file for it

        Relative Path:
        ../testfile.txt will create in Week 13 folder
        ../../testfile.txt will create in ENGR213 Code folder
        Absolute Path:
        " / " - root directory
        " ~ " - user home directory
    */
    fptr = fopen("./testfile.txt", "w");
    fprintf(fptr, "ENGR213 Test");
    fclose(fptr);

    fptr = fopen("./testfile.txt", "a");
    fprintf(fptr, " 121212");
    fclose(fptr);

    return 0;
}