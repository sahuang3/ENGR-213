// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the input size of the array from the user, with a maximum size
of 10 otherwise the program will exit. Then the program will take the values the user 
wants to store into the array. Lastly, the program will calculate and print out the 
sum of all the values stored in the array using a pointer.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    // Take input size from user
    int userSize;
    printf("Input the number of elemnts to store in the array (max 10): ");
    scanf("%d", &userSize);
    if(userSize > 10){
        printf("Size is bigger than 10. Exiting program...");
        exit(0);
    }
    int userArr[userSize];

    // Take elements to store in array from user
    printf("Input %d numbers of elements in the array: \n", userSize);
    for(int i=0; i < userSize; i++){
        printf("element - %d: ", i);
        //scanf("%d", &userArr[i]); // Can use either
        scanf("%d", userArr+i);
    }
    
    // Adding the sum of all elements in array using pointer
    int sum = 0;
    int *ptr = userArr;
    for(int i=0; i<userSize; i++){
        sum = sum + *ptr;
        ptr++;
    }
    printf("The sum of array is: %d", sum);

    return 0;
}
