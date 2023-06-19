// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take an input from the user, which can only be "S, A, B, Y, F". Depending on what the user
inputs, it will display the corresponding descriptions of the grade the user inputs. 
*/

#include<stdio.h>

int main(){

    // Take the grade input from user
    char userInput;
    printf("Input the grade: ");
    scanf("%s", &userInput);

    // Switch case
    switch(userInput){
        case 'S':
        printf("You have chosen: SUPER");
        break;
        
        case 'A':
        printf("You have chosen: VERY GOOD");
        break;

        case 'B':
        printf("You have chosen: FAIR");
        break;

        case 'Y':
        printf("You have chosen: ABSENT");
        break;

        case 'F':
        printf("You have chosen: FAILS");
        break;

        default:
        printf("INVALID");
        break;
    }

    return 0;
}