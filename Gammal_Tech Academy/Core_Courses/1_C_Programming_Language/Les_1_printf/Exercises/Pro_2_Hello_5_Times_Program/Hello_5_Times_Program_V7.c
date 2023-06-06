

/* >>> Hello 5 Times Program ( Version 7 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *print_hello(char h1[]);

int main()
{
    char message[] = {"\n\nYou welcome in Hello 5 Times Program ( Version 7 ) ..\n\n"};
    welcome_message(message);
    printf(message);

    char hello[] = {"Hello\n\n"};
    print_hello(hello);
    printf(hello);
    printf(hello);
    printf(hello);
    printf(hello);
    printf(hello);
    

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