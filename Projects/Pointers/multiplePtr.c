#include<stdio.h>

int main(){

    // Multiple pointers
    int y = 3;
    int z = 2;
    int* ptr = &y; // pointer for y
    int* ptr2 = ptr; // pointer for pointer of y
    
    *ptr = 7;  // y = 7
    printf("Ptr value: %d \n", *ptr);

    *ptr2 = *ptr2 + 1; // y = 8, *ptr3 = ptr2 = ptr2 + 1 == 7 = 7+1
    printf("Ptr2 value: %d \n", *ptr2);
    
    ptr = &z; // ptr3 still points to y, but ptr points to z
    *ptr2 = 10; // y = 10
    printf("Ptr2 value: %d \n", *ptr2);

    return 0;
}