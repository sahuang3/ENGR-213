// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the input size of the array from the user. Then the program will 
take the values the user wants to store into the array. Lastly, the program will print 
out the values stored in the array using a pointer.
*/

#include<stdio.h>

int main(){
    
    // Take input size from user
    int userSize;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &userSize);
    int userArr[userSize];

    // Take elements to store in array from user
    printf("Input %d numbers of elements in the array: \n", userSize);
    for(int i=0; i < userSize; i++){
        printf("element - %d: ", i);
        scanf("%d", &userArr[i]);
    }

    // Printing elements in array using pointer
    int *myArr = userArr;
    printf("The elements you entered are: \n");
    for(int i=0; i<userSize; i++){
        printf("element - %d: %d \n", i, *(myArr+i));
    }

    return 0;
}
