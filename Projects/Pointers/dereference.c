#include<stdio.h>

int main(){

    int x = 3;
    int* ptr = NULL; // best to initialize as null
    ptr = &x; // setting pointer to x

    // Note: * means the value, & means to get the address of variable
    printf("The value of x is %d \n", *ptr);
    printf("The address of x is %p \n", ptr);

    x = 10;
    printf("The value of x is %d \n", *ptr);
    printf("The address of x is %p \n", ptr);

    *ptr = 100; // This update the x, NOT the address
    printf("The value of x is %d \n", *ptr);
    printf("The address of x is %p \n", ptr);

    return 0;
}