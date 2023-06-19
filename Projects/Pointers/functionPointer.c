#include<stdio.h>

/* Recall that before we use pass by value
int sumTwoNumbers(int n1, int n2){
    int s;
    s = n1 + n2;
    return s;
}
*/

// Pass by reference
int sumTwoNumbers(int *n1, int *n2){
    int s;
    s = *n1 + *n2;
    return s;
}

double getAverage(int* arr, int size){
    double avg;
    double sum = 0;
    for(int i=0; i<size; i++){
        // 3 methods

        // Method 1: Regular
        sum = sum + arr[i];

        /* 
        Dereferencing pointer using either 2 methods
        Method 2:
        sum = sum + *arr;
        arr++;
        
        // Method 3:
        sum = sum + *(arr+i);
        */
    }
    avg = sum/size;
    return avg;
}

int main(){
    int x = 2, y = 2;
    int z;
    z = sumTwoNumbers(&x, &y);

    printf("%d + %d = %d \n", x, y, z);

    // Function Arrays passed by reference
    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance, 5);
    printf("Average value is %f \n", avg);

    return 0;
}