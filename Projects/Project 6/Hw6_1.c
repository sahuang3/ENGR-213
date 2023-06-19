// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take 2 numbers from the user. Then the program will display the 2 numbers before
and after it has been swapped. The program will go through a function that passes in both the
numbers from the user and reassigns them in a swapped order.
*/

#include<stdio.h>

void swapValues(int userVal1, int userVal2);

int main(){

    int num1, num2;

    // Taking user's input
    printf("Input 1st number: ");
    scanf("%d", &num1);
    printf("Input 2nd number: ");
    scanf("%d", &num2);
    
    printf("Before swapping: n1 = %d, n2 = %d \n", num1, num2);
    swapValues(num1, num2);

    return 0;
}

void swapValues(int userVal1, int userVal2){
    int temp = userVal1;
    userVal1 = userVal2;
    userVal2 = temp;
    printf("After swapping: n1 = %d, n2 = %d \n", userVal1, userVal2);
}
