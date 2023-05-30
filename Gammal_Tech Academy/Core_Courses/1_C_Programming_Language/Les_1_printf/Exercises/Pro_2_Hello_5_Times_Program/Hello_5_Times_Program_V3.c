

/* >>> Hello 5 Times Program ( Version 3 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

void welcome_message(char message[]);
void print_hello(char h1[],char h2[],char h3[],char h4[],char h5[]);

int main()
{
    welcome_message("\n\nYou welcome in Hello 5 Times Program ( Version 3 ) ..\n\n");
    print_hello("Hello","Hello","Hello","Hello","Hello");

    return 0;
}

// Functions ..

// Welcome message function;
void welcome_message(char message[])
{
    printf("%s", message);
}

// Printing hello function;
void print_hello(char h1[],char h2[],char h3[],char h4[],char h5[])
{
    printf("%s\n", h1);
    printf("%s\n", h2);
    printf("%s\n", h3);
    printf("%s\n", h4);
    printf("%s\n\n\n", h5);
}