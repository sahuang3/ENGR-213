#include<stdio.h>

int main(){
    
    int x = 3;
    int* ptr = NULL;
    ptr = &x;

    printf("The value of x is %d \n", x);
    printf("The address of x is %p \n", ptr);

    
    int k = 2;
    /* Adding k to pointer causes memory location skipping, by k * N bytes
    In this case, given k = 2 and int = 4 byte, we're skipping 8 bytes

    using *ptr++;
    OR
    ptr = ptr + k;
    printf("The value of x is %d \n", x);
    printf("The address of x is %p \n", ptr);
    */

    // To add values in ptr, we need *
    *ptr = *ptr + k; // value of ptr = value of ptr + k
    printf("The value of x is %d \n", x);
    printf("The address of x is %p \n", ptr);

    // Setting values to pointer
    *ptr = 10;
    printf("The value of x is %d \n", x);
    printf("The address of x is %p \n", ptr);

     // Increments/Decrement operators
    int y = 3;
    int* ptr2 = &y;
    (*ptr2)++; // Must be in parenthesis if you want to increment value
    printf("The value of y is %d \n", *ptr2);
    printf("The address of y is %p \n", ptr2);

    return 0;
}