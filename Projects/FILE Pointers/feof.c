#include<stdio.h>
// feof = end of file, checks if we reached the end of file
// int feof(file ptr);

int main(){

    // To read each character until end of file
    FILE* fptr;
    fptr = fopen("./program.txt", "r");
    while(!feof(fptr)){
        int ch = fgetc(fptr);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);
    }
    fclose(fptr);

    /* Equivalent:
    fptr = fopen("./program.txt", "r");
    while(1){
        int ch = fgetc(fptr);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);
    }
    fclose(fptr);
    */
}