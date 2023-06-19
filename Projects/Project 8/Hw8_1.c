// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will calculate the mean of each student's grade in their English, Math, 
and Physics class. Then, the program will output all of their grades in each class
and the mean.
*/

#include<stdio.h>

struct student{
    char name[20];
    int eng;
    int math;
    int phys;
};

struct student data[]={
    {"Jack", 82, 72, 78},
    {"Kim", 87, 82, 89},
    {"Steve", 92, 62, 79},
    {"Mark", 80, 82, 88}
};

double studentMean(int i){
    double sum = 0;
    sum = data[i].eng + data[i].math + data[i].phys;
    sum = sum/3;

    return sum;
}

int main(){
    
    int i;
    for(i=0; i<4; i++){
        printf("%7s: Eng = %3d Math= %3d Phys= %3d Mean = %0.1lf\n",
        data[i].name, data[i].eng, data[i].math, data[i].phys, studentMean(i));
    }
    
    return 0;
}