// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the size of the array and elements from user. Then the program will display the 
elements stored in the array and will also display in reversed order. Lastly, the program will display
the maximum and minimum element inside of the given array.
*/

#include<stdio.h>

void revDisplay(int arr[], int size);
void maxElement(int arr[], int size);
void minElement(int arr[], int size);


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
    revDisplay(testArr, userSize);

    // Maximum element in array
    maxElement(testArr, userSize);
    
    // Minimum element in array
    minElement(testArr, userSize);

}

void revDisplay(int arr[], int size){
    printf("The values stored into the array in reversed order are: ");
    for(int i=size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void maxElement(int arr[], int size){
    int tempMax = arr[0];
    for(int i=1; i<size; i++){
        if(tempMax < arr[i]){
            tempMax = arr[i];
        }
    }
    printf("The maximum element is: %d \n", tempMax);
}

void minElement(int arr[], int size){
    int tempMin = arr[0];
    for(int i=1; i<size; i++){
        if(tempMin > arr[i]){
            tempMin = arr[i];
        }
    }
    printf("The minimum element is: %d \n", tempMin);
}
