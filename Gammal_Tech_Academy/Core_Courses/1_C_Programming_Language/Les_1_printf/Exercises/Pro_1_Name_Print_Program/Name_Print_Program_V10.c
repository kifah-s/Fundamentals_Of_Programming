

/* >>> Name Print Program ( Version 10 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

char *welcome_message();
char *name_function();

int main()
{
    printf(welcome_message());

    printf(name_function());

    return 0;
}

// Functions ..

// Welcome message function;
char *welcome_message()
{
    char *wel_mas[] = {("\n\nYou welcome in Name Print Program ( Version 10 ) ..\n\n")};

    return *wel_mas;
}

char *name_function()
{
    char *name[] = {("My name is kifah saloum\n\n\n")};

    return *name;
}