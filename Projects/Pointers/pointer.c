#include<stdio.h>

// pointer = memory address of pointer

int main(){

    int x;
    x=3;

    // Declare integer pointer: dataType* ptrName
    int* y;

    // Initialize pointer to the memory address of x
    y = &x;
    printf("The X is %d \n", x);
    printf("The memory address of X is %p \n", &x);
    printf("The memory address pointer is %p \n", y);
    printf("The value of pointer is %d \n", *y);

    double num = 10;
    double* numPtr;
    numPtr = &num;
    printf("The num is %lf \n", num);
    printf("The memory address of num is %p \n", &num);
    printf("The memory address of pointer is %p \n", numPtr);
    printf("The value of pointer is %lf \n", *numPtr);

    return 0;
}