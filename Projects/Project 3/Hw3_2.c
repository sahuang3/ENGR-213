// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will asks the user for the height and width of a rectangle. Then the program calculates the perimeter
and area with the given measurements. The program will also store all measurements in the double data type and
prints it out.
*/

#include<stdio.h>

int main(){

    printf("This program will calculate the perimeter and area of a rectangle.\n");

    // Take the user's input of height and width
    double userHeight;
    printf("Please enter the height: ");
    scanf("%lf", &userHeight);
    double userWidth;
    printf("Please enter the width: ");
    scanf("%lf", &userWidth);

    // Printing out the given height and width of rectangle
    printf("Rectangle's height:\t %0.2lf \n", userHeight);
    printf("Rectangle's width:\t %0.2lf \n", userWidth);

    // Coverting the given measurements into Area, Area = Height * Width
    double area = userHeight * userWidth;
    printf("\nRectangle's area:\t %0.2lf \n", area);

    // Converting the given measurements into Perimeter, Perimeter = (Height + Width) * 2
    double perimeter = (userHeight + userWidth) * 2;
    printf("Rectangle's perimeter:\t %0.2lf \n", perimeter);

    return 0;
}