

/* >>> Hello 5 Times Program ( Version 17 ) <<< */

/* >>> A program that prints the word "Hello" using 5 different printf orders <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *print_hello(char h1[]);

int main()
{
    char message[] = {"\n\nYou welcome in Hello 5 Times Program ( Version 17 ) ..\n\n"};
    printf(welcome_message(message));

    char hello[] = {"Hello\n\n"};
    
    /* printf(print_hello(hello)); */
    printf("%s",print_hello(hello));
    
    /* printf(print_hello(hello)); */
    printf("%s",print_hello(hello));
    
    /* printf(print_hello(hello)); */
    printf("%s",print_hello(hello));
    
    /* printf(print_hello(hello)); */
    printf("%s",print_hello(hello));
    
    /* printf(print_hello(hello)); */
    printf("%s",print_hello(hello));
    

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