

/* >>> Hello 5 Times Program ( Version 4 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

void welcome_message(char message[]);
void print_hello(char h1[]);

int main()
{
    welcome_message("\n\nYou welcome in Hello 5 Times Program ( Version 4 ) ..\n\n");
    print_hello("Hello");
    print_hello("Hello");
    print_hello("Hello");
    print_hello("Hello");
    print_hello("Hello");

    return 0;
}

// Functions ..

// Welcome message function;
void welcome_message(char message[])
{
    printf("%s", message);
}

// Printing hello function;
void print_hello(char h1[])
{
    
    printf("%s\n\n", h1);
}