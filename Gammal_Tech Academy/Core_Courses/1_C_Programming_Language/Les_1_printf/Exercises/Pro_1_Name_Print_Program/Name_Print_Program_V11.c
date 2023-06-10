

/* >>> Name Print Program ( Version 11 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

char *welcome_message();
char *name_function();

int main()
{
    char *wel_mas[] = {welcome_message()};
    printf(*wel_mas);

    char *name[] = {name_function()};
    printf(*name);

    return 0;
}

// Functions ..

// Welcome message function;
char *welcome_message()
{
    char *wel_mas[] = {("\n\nYou welcome in Name Print Program ( Version 11 ) ..\n\n")};

    return *wel_mas;
}

char *name_function()
{
    char *name[] = {("My name is kifah saloum\n\n\n")};

    return *name;
}