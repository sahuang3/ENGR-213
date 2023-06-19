// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the given numbers of minutes by the user and converts it into the value measured
in days and years. Then it prints it out the given # of minutes and the converted values.
*/

#include<stdio.h>

int main(){
    
    // Taking the user's input of minutes
    double userInput; // Since we want to
    printf("Please enter the number of minutes: ");
    scanf("%lf", &userInput);

    // Converting the minutes to years
    const int daysInYear = 365; // Assuming there are 365 days total in a year
    double minsInYear = 60*24*daysInYear; // 60 mins * 24 hours * 365 days
    double years = userInput / minsInYear;

    // Converting the minutes to days
    const int minsInDays = 1440; // 60 mins * 24 hours = 1440
    double days = userInput / minsInDays;

    // Printing the results
    printf("%0.0lf minutes is approximately %lf years and %lf days\n", userInput, years, days);

    return 0;
}
