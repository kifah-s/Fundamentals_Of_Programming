

/* >>> Hello 5 Times Program ( Version 16 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *print_hello(char h1[]);

int main()
{
    printf(welcome_message("\n\nYou welcome in Hello 5 Times Program ( Version 16 ) ..\n\n"));

    /* printf(print_hello("Hello\n\n")); */
    printf("%s", print_hello("Hello\n\n"));

    /* printf(print_hello("Hello\n\n")); */
    printf("%s", print_hello("Hello\n\n"));

    /* printf(print_hello("Hello\n\n")); */
    printf("%s", print_hello("Hello\n\n"));

    /* printf(print_hello("Hello\n\n")); */
    printf("%s", print_hello("Hello\n\n"));

    /* printf(print_hello("Hello\n\n")); */
    printf("%s", print_hello("Hello\n\n"));

    return 0;
}

// Functions ..

// Welcome message function;
char *welcome_message(char message[])
{
    /* printf("%s", message); */
    return message;
}

// Printing hello function;
char *print_hello(char h1[])
{
    /* printf("%s\n\n", h1); */
    return h1;
}