#include<stdio.h>

int main(){

    int myArray[6] = {0,1,2,3,4,5};

    // Memory address of each index
    printf("Index: %d \n", myArray[0]);
    printf("Address: %p \n", &myArray[0]); // Memory of 1st element
    printf("Index 1 Address: %p \n", &myArray[1]); // Memory of 2nd element

    printf("Address: %p \n", myArray); // Note: same as &myArray[0]


    float myArr[3] = {1.2, 2.1, 5.3};
    float* pa;

    // Both equivalent, but might need both for loops
    pa = myArr;
    pa = &myArr[0];

    // Printing using regular index vs pointer
    printf("Index: %f \n", myArr[0]);
    printf("Pointer: %f \n", *myArr);

    printf("Index: %f \n", pa[0]);
    printf("Pointer: %f \n", *pa);

    printf("Index: %f \n", pa[1]);
    printf("Pointer: %f \n", *(pa+1));

    // Changing value using regular index
    printf("Changing using index \n");
    myArr[0] = 100.2;
    printf("%.2f \n", pa[0]);

    // Changing value using pointer
    printf("Changing using pointer \n");
    *pa = 3.1; // setting index 0 to 3.1
    *(pa+1) = 200.1; //setting index 1 to 200.1
    printf("%f \n", pa[0]);
    printf("%f \n", pa[1]);
    printf("%f \n", pa[2]);

    return 0;
}