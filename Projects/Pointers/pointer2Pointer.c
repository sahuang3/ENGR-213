#include<stdio.h>

int main(){

    int x = 3;
    int *p = &x;
    int **p2 = &p;

    x = 2;

    printf("*p is %d \n", *p);
    printf("**p is %d \n", **p2);
}