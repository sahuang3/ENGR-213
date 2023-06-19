// Copyright 2022, Samson Huang, All rights reserved.

/*
This program will take the size and elements of 2 square matrices from user. Then the program will display 
the elements stored in both the square matrices. Lastly, the program will also display the addition and the
subtraction of both matrices.
*/

#include<stdio.h>

void arrayAddition(int size, int arr1[size][size], int arr2[size][size]);
void arraySubtraction(int size, int arr1[size][size], int arr2[size][size]);

int main(){

    // Take the size of both square matrices
    int userSize;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &userSize);
    int testArr1[userSize][userSize];
    int testArr2[userSize][userSize];

    // Take values to store in first matrix
    printf("Input elements in the first matrix:\n");
    for(int i=0; i<userSize; i++){
        for(int j=0; j<userSize; j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &testArr1[i][j]);
        }
    }

    // Take values to store in second matrix
    printf("Input elements in the second matrix:\n");
    for(int i=0; i<userSize; i++){
        for(int j=0; j<userSize; j++){
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &testArr2[i][j]);
        }
    }
    printf("\n");

    // Printing out the first matrix
    printf("The First matrix is: \n");
    for(int i=0; i<userSize; i++){
        for(int j=0; j<userSize; j++){
            printf("%d ", testArr1[i][j]);
        }
        printf("\n");
    }

    // Printing out the second matrix
    printf("The Second matrix is: \n");
    for(int i=0; i<userSize; i++){
        for(int j=0; j<userSize; j++){
            printf("%d ", testArr2[i][j]);
        }
        printf("\n");
    }

    // Addition of 2 matrices
    arrayAddition(userSize, testArr1, testArr2);

    // Subtraction of 2 matrices
    arraySubtraction(userSize, testArr1, testArr2);
   
    return 0;
}

void arrayAddition(int size, int arr1[size][size], int arr2[size][size]){
    printf("The Addition of two matrices is: \n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}

void arraySubtraction(int size, int arr1[size][size], int arr2[size][size]){
    printf("The Subtraction of two matrices is: \n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ", arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
}
