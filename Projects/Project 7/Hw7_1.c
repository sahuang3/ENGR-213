// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will demonstrate the use of & and * operator when using pointers. The program will 
output the address and values using &, & and *, and pointers.
*/

#include<stdio.h>

int main(){

    // Initialize variables
    int num1 = 100;
    double num2 = 200.600006;
    char char1 = 'z';

    // Assigning pointers
    int *m = &num1;
    double *fx = &num2;
    char *cht = &char1;

    // Printing variables
    printf("Pointer: Demonstrate the use of & and * operator: \n");
    printf("------------------------------------------------------\n");
    printf("m = %d \n", num1);
    printf("fx = %lf \n", num2);
    printf("cht = %c \n\n", char1);

    // Using & operator
    printf("Using & operator: \n");
    printf("------------------------------------------------------\n");
    printf("address of m = %p \n", &num1);
    printf("address of fx = %p \n", &num2);
    printf("address of cht = %p \n\n", &char1);

    // Using & and * operator
    printf("Using & and * operator: \n");
    printf("------------------------------------------------------\n");
    printf("value at address of m = %d \n", *(&num1));
    printf("value at address of fx = %lf \n", *(&num2));
    printf("value at address of cht = %c \n\n", *(&char1));

    // Using only pointer variable
    printf("Using only pointer variable: \n");
    printf("------------------------------------------------------\n");
    printf("address of m = %p \n", m);
    printf("address of fx = %p \n", fx);
    printf("address of cht = %p \n\n", cht);

    // Using only pointer operator
    printf("Using only pointer operator: \n");
    printf("------------------------------------------------------\n");
    printf("value at address of m = %d \n", *m);
    printf("value at address of fx = %lf \n", *fx);
    printf("value at address of cht = %c \n", *cht);

    return 0;
}