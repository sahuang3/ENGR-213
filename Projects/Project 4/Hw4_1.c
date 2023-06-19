// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will asks the user for a number in integer data type. Then the program checks if the number
given by the user is either odd or even. Lastly, it will print out the results of the given number and it is
either odd or even.
*/

#include<stdio.h>

int main(){

    // Take input from user
    int userNum;
    printf("Please enter an integer number: ");
    scanf("%d", &userNum);

    // Checks the number if it's odd or even
    if(userNum % 2 == 0){
        printf("%d is an even number", userNum);
    } else {
        printf("%d is an odd number", userNum);
    }

    return 0;
}
