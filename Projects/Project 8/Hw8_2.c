// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the input size (1-10) from the user and dynamically allocate 
memory for the input array. Then, the program will store the user's values into the 
array and it will find the largest element in that array. Lastly, it will output the 
largest element in the array.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    // Taking size from user
    int userSize;
    printf("Input total number of elements (1 to 10): ");
    scanf("%d", &userSize);
    if(userSize < 1 || userSize > 10){
        printf("Size is not within 1-10. Stopping Program...");
        exit(0);
    }
    int* userVal = NULL;
    userVal = (int*)calloc(userSize, sizeof(int));

    // Check if memory is allocated
    if(userVal == NULL){
        printf("Memory not allocated. \n");
        exit(0);
    }
    
    // Taking values from user
    for(int i=0; i < userSize; i++){
        printf("Number %d: ", i+1);
        scanf("%d", userVal + i);
    }
    
    // Checking for largest value
    int largestVal = *userVal;
    for(int i=0; i < userSize; i++){
        if(largestVal < *(userVal + i)){
            largestVal = *(userVal + i);
        }
    }
    printf("The largest element is: %d", largestVal);
    
    free(userVal);

    return 0;
}