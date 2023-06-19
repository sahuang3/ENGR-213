#include<stdio.h>

int main(){
    
    // Declaring 1-D arrays: dataType arrayName [arraySize];
    int myArray[9];
    const int n = 10;
    int test[n];

    // Initialize 1-D array
    int test2[] = {10,20,30,40}; // Declare with Initialize
    int test3[6] = {10,20,30,40}; // Element 4 and 5 will be random, given 4 values in size 6
    myArray[0] = 2; // The first element is 2
    printf("The first element in myArray is %d \n", myArray[0]);

    // Using For loop to initialize array with 0-5
    for(int i=0; i<6; i++){
        myArray[i] = i;
        printf("The i will be stored in myArray is %d \n", i);
    }

    // Printing out all array elements
    for(int i=0; i<6; i++){
        printf("The array element is %d \n", myArray[i]);
    }

    // Getting the memory address of X-element
    printf("%p \n", &myArray[0]);

    // Class Exercise - create array w/101 elements, with values: 100-200
    int testArray[101];
    for(int i=0; i<101; i++){
        testArray[i] = 100 + i;
        printf("The array element is %d \n", testArray[i]);
    }

    return 0;
}