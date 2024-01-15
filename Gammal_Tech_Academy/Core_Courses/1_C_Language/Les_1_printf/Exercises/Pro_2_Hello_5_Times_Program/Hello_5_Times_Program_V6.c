

/* >>> Hello 5 Times Program ( Version 6 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

void welcome_message(char message[]);
void print_hello(char h1[]);

int main()
{
    char message[] = {"\n\nYou welcome in Hello 5 Times Program ( Version 6 ) ..\n\n"};
    welcome_message(message);

    char hello[] = {"Hello"};
    print_hello(hello);
    print_hello(hello);
    print_hello(hello);
    print_hello(hello);
    print_hello(hello);

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