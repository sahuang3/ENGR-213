/*
Copyright Samson
This is a demo for the hello world program
*/

#include<stdio.h>

#define Pi 3.1416; // Global variable, local variable: const int pi = 3.1416

int main(){

    printf("\t \"This is a test\" \n"); // \"(message)\" prints message in double quotes
    
    printf("\tMy name is Samson \n"); // \t = tab indentation

    // Variables
    //int score = 100; // Assigning variable 'score' to 100

    int score213, score456; // Variable list, initializing the varaibles
    score213 = 90; // Assigning the variables
    score456 = 100;

    printf("\tMy ENGR213 score is %d \n", score213); // %d acts as a placeholder for variable
    printf("\t%d is a good score \n", score213); //%d is for int, %f is for double

    printf("\tMy ENGR456 score is %d \n", score456); 
    printf("\t%d is a good score \n", score456); 

    return 0; // There is no error
}