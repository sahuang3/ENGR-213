#include<stdio.h>

/* Struct vs Union
struct Books{
    char title[50]; // 50 bytes
    int book_id; // 4 bytes
} Book;
Allocates: 54 bytes

union Books{
    char title[50]; // 50 bytes
    int book_id; // 4 bytes
} Book;
Allocates: 50 bytes (Takes the highest byte)
*/

int main(){

    return 0;
}