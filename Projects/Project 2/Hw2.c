// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will use proper datatypes to hold the variables of Course, Name, Student ID, and GPA.
Then all the variables will get printed out.   
*/


#include<stdio.h>

int main(){

    // Initializing and Assigning variables
    char courseName[] = "ENGR213";
    char studentName[] = "Samson Huang";
    const int studentID = 920216528;
    double GPA = 3.7;

    // Printing out the variables
    printf("Courses: \t%s \n", courseName);
    printf("Student Name: \t%s \n", studentName);
    printf("Student ID: \t%d \n", studentID);
    printf("GPA: \t\t%0.1lf \n", GPA);
    
    return 0;
}