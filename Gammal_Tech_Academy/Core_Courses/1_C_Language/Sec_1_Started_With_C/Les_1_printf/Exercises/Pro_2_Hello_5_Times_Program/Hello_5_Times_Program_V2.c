

/* >>> Hello 5 Times Program ( Version 2 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

void welcome_message();
void print_hello();

int main()
{
    welcome_message();
    print_hello();

    return 0;
}

// Functions ..

// Welcome message function;
void welcome_message()
{
    printf("\n\nYou welcome in Hello 5 Times Program ( Version 2 ) ..\n\n");
}

// Printing hello function;
void print_hello()
{
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n\n\n");
}