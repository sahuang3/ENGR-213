#include<stdio.h>

int main(){

    // Declaring 2D arrays: dataType arrayName[rowSize][columnSize]
    int arr[3][4]; // 3 rows 4 columns
    
    // Initialization. each row is in it's own brackets
    int myArray[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int sameArr[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    int sameArr2[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    // Initialize using double for-loops
    int myArr[3][4];
    int num = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            myArr[i][j] = num;
            num++;
        }
    }

    // Printing using double for-loops
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("myArr[%d][%d] = %d \t", i, j, myArr[i][j]);
        }
        printf("\n");
    }

    // Class exercise #1 - 4x5 array, initialze col 0 with 0, col 1 with 1 ...
       int testArr[4][5];
    for(int i=0; i<4; i++){
        int input = 0;
        for(int j=0; j<5; j++){
            testArr[i][j] = input;
            input++;
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            printf("testArr[%d][%d] = %d \t", i, j, testArr[i][j]);
        }
        printf("\n");
    }
    
    // Class exercise #2 - Takes 4 numbers from user and find the highest number
    // Take array size from input
    int userSize;
    
    printf("Input the size of the array to store the number: ");
    scanf("%d", &userSize);
    int testArr[userSize];

    // Take values to store in array
    printf("Input %d numbers of elements in the array: \n");
    for(int i=0; i<userSize; i++){
        printf("element - %d: ", i);
        scanf("%d", &testArr[i]);
    }
    
    // Print out values stored in array
    printf("The values stored into the array are: ");
    for(int i=0; i<userSize; i++){
        printf("%d ", testArr[i]);
    }
    printf("\n");

    // Print out values stored reverse in array
    printf("The values stored into the array are: ");
    for(int i=userSize-1; i>=0; i--){
        printf("%d ", testArr[i]);
    }
    printf("\n");

    // Maximum element in array
    int tempMax = 0;
    for(int i=0; i<userSize; i++){
        if(tempMax < testArr[i]){
            tempMax = testArr[i];
        }
    }
    printf("The maximum element is: %d \n", tempMax);
    
    // Minimum element in array
    int tempMin = testArr[0];
    for(int i=0; i<userSize; i++){
        if(tempMin > testArr[i]){
            tempMin = testArr[i];
        }
    }
    printf("The minimum element is: %d \n", tempMin);


    return 0;
}