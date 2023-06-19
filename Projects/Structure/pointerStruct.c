#include<stdio.h>

int main(){

    struct Point{
        int x,y;
    };

    struct Point p1 = {1,2};

    // p2 is a pointer to structure p1
    struct Point* p2 = &p1;

    // Accessing structure members using structure pointer
    printf("P2 pointing to P1\n");
    printf("P2: ");
    printf("%d %d \n", p2->x, p2->y);
    printf("P1: ");
    printf("%d %d \n", p1.x, p1.y);

    struct Point p3;
    struct Point* p4 = &p3;
    p4->x = 3;
    p4->y = 4;
    printf("P4 pointing to P3\n");
    printf("P4: ");
    printf("%d %d \n", p4->x, p4->y);
    printf("P3: ");
    printf("%d %d \n", p3.x, p3.y);

    return 0;
}