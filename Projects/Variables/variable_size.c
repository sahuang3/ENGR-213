#include<stdio.h>
#include<stdbool.h> // Required if using boolean datatypes

int main(void){

    int age = 30;
    int year = 2022;

    printf("I am %d years old in %d \n", age, year);

    // Variable size

    // Int - 4 bytes
    int sizeAge; // Variable for place holder
    sizeAge = sizeof(age); // sizeof will check the variable size

    printf("size of age is %d byte \n", sizeAge);
    // OR, either works
    printf("size of age is %d byte \n", sizeof(age));

    short int ID = 11111;
    printf("size of ID is %lu byte \n", sizeof(ID));

    // Double - 8 bytes
    double GPA = 3.7;
    printf("My GPA is %0.2lf \n", GPA); // adding numbers before format specifier limits the decimals
    printf("My GPA is %0.4lf \n", GPA); 
    printf("size of GPA is %d byte \n", sizeof(GPA));

    // Boolean
    bool x = true; // x = 1, true = 1
    bool y = false;x/ // y = 0, false = 0
    printf("x is: %d \n", x);
    printf("y is: %d \n", y);

    // Char - 1 byte and String
    char a = 'E';
    char b = 'N';
    char c = 'G';
    char d = 'R';
    printf("The characters are %c %c %c %c \n", a,b,c,d);

    char greeting[] = "Hello"; // Recommended
    // OR
    char greetings[6] = {'H','e','l','l','o','\0'};

    printf("The string is %s \n", greeting);
    printf("The second string is %s \n", greetings);

    // Using scanf for char
    char k;
    printf("Please type a char: ");
    scanf("%c", &k); // Read a char from keyboard and stored into k using &k
    // scanf(%d, &k); for Int, need to initialize k as int (int k;)
    printf("The character you have read is %c \n", k);

}