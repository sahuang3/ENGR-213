#include<stdio.h>

int main(){

    struct Point{
        int x, y;
    };
    
    // Create an array of structures
    struct Point arr[10];

    // Access array members 
    //Note: it is 1D array even though we have 2 variables
    arr[0].x = 10;
    arr[0].y = 20;
    printf("%d %d \n", arr[0].x, arr[0].y);

    arr[1].x = 30;
    arr[1].y = 30;
    printf("%d %d \n", arr[1].x, arr[1].y);

    return 0;
}