// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will hold the variables of Name, Student ID, and Major.
Then all the variables will get printed out.   
*/


#include<stdio.h>

int main(){

    // Initializing and Assigning variables to store Name, ID, and Major
    char studentName[] = "Samson Huang";
    int studentID = 920216528;
    char studentMajor[] = "Computer Engineering";

    // Then we need to print the student's information
    printf("Name: %s \n", studentName); // %s is the placeholder for String variable
    printf("Student ID: %d \n", studentID); // %d is the placeholder for Int variable
    printf("Major: %s \n", studentMajor);
    
}