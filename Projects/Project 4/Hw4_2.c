// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will find how many numbers from 1-100 is greater than 31. Then it will add up all the numbers
that are greater than 31 together and output the sum of all the numbers.
*/

#include<stdio.h>

int main(){

    int count = 0;
    int sum = 0;

    // For loop for numbers 1-100
    for(int i=1; i<101; i++){
        if(i > 31){
            count++;
            sum = sum + i;
        } 
    }
    
    printf("There are %d numbers from 1 to 100 are greater than 31. \n", count);
    printf("The sum of these %d number is %d.", count, sum);

    return 0;
}