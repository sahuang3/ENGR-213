#include<stdio.h>
// int fseek(FILE *fptr, long int offset, int whence)
// offset: number of bytes to offset
// whence: SEEK_SET/SEEK_END: beginning/end of file, SEEK_CUR: given location,

int main(){

    FILE *fptr;
    fptr = fopen("./program.txt", "w");
    fputs("This is fseek example", fptr);
    fseek(fptr, 8, SEEK_SET); // start of the 8th index
    fputs("C Programming Language", fptr);

    return 0;
}