#include<stdio.h>
#include<string.h>

/* Struct format:
struct [structure_tag]
{
    dataType member1;
    dataType member2;
    ....
} [one or more structure objects]; this line optional**
*/

int main(){

    struct Books{
        char title[50];
        char author[50];
        int book_id;
    };

    struct Books book1;
    struct Books book2;

    // book 1 specification
    // Note: since using char array, we can't use "=" for string
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    book1.book_id = 6495407;

    // book 2 specification
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    book2.book_id = 6495700;

    // print book1 info
    printf("Book 1 title: %s\n", book1.title);
    printf("Book 1 author: %s\n", book1.author);
    printf("Book 1 book_id: %d\n\n", book1.book_id);

    // print book2 info
    printf("Book 2 title: %s\n", book2.title);
    printf("Book 2 author: %s\n", book2.author);
    printf("Book 2 book_id: %d\n\n", book2.book_id);

    // Updating values
    book2.book_id = 123456789;
    printf("Book 2 book_id: %d\n", book2.book_id);
    strcpy(book1.title, "New book");
    printf("Book 1 title: %s\n", book1.title);

    return 0;
}