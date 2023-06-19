// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take a string and a 'char' from the user and it checks how frequent the char is used in the
given string. The program will output the number of times the 'char' has been used in the string given by
the user.
*/

#include<stdio.h>
#include<string.h>

int main(){

    // Take input string from user
    char userInput[100];
    printf("Input the string: ");
    fgets(userInput, sizeof(userInput), stdin);
    userInput[strlen(userInput)-1] = '\0';

    // Take char to check frequency from user
    char userChar;
    printf("Input the character to find frequency: ");
    scanf("%c", &userChar);

    // Check frequency of char in string
    int count = 0;
    for(int i=0; i<strlen(userInput); i++){
        if(userInput[i] == userChar){
            count++;
        }
    }
    printf("The frequency of '%c' is: %d", userChar, count);

    return 0;
}