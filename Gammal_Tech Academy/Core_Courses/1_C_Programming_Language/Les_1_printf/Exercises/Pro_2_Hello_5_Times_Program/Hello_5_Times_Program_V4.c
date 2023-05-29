

/* >>> Hello 5 Times Program ( Version 3 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

void welcome_message();
void print_hello(char h1[]);

int main()
{
    welcome_message();

    char hello[] = {"Hello"};
    print_hello(hello);

    return 0;
}

// Functions ..

// Welcome message function;
void welcome_message()
{
    printf("\n\nYou welcome in Hello 5 Times Program ( Version 3 ) ..\n\n");
}

// Printing hello function;
void print_hello(char h1[])
{
    printf("%s\n", h1);
    printf("%s\n", h1);
    printf("%s\n", h1);
    printf("%s\n", h1);
    printf("%s\n\n\n", h1);
}