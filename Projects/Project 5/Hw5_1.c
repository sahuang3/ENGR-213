// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the size of the array and elements from user. Then the program will display the 
elements stored in the array and will also display in reversed order. Lastly, the program will display
the maximum and minimum element inside of the given array.
*/

#include<stdio.h>

int main(){

    // Take array size from input
    int userSize;
    printf("Input the size of the array to store the number: ");
    scanf("%d", &userSize);
    int testArr[userSize];

    // Take values to store in array
    printf("Input %d numbers of elements in the array: \n");
    for(int i=0; i<userSize; i++){
        printf("element - %d: ", i);
        scanf("%d", &testArr[i]);
    }
    printf("\n");
    
    // Print out values stored in array
    printf("The values stored into the array are: ");
    for(int i=0; i<userSize; i++){
        printf("%d ", testArr[i]);
    }
    printf("\n");

    // Print out values stored in array in REVERSED order
    printf("The values stored into the array in reversed order are: ");
    for(int i=userSize-1; i>=0; i--){
        printf("%d ", testArr[i]);
    }
    printf("\n");

    // Maximum element in array
    int tempMax = testArr[0];
    for(int i=1; i<userSize; i++){
        if(tempMax < testArr[i]){
            tempMax = testArr[i];
        }
    }
    printf("The maximum element is: %d \n", tempMax);
    
    // Minimum element in array
    int tempMin = testArr[0];
    for(int i=1; i<userSize; i++){
        if(tempMin > testArr[i]){
            tempMin = testArr[i];
        }
    }
    printf("The minimum element is: %d \n", tempMin);

}