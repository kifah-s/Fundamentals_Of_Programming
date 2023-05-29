

/* >>> Name Print Program ( Version 4 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

void welcome_message();
void name_function(char name[]);

int main()
{
    welcome_message();

    char name[] = "kifah saloum";

    name_function(name);

    return 0;
}

// Functions ..

// Welcome message function;
void welcome_message()
{
    printf("\n\nYou welcome in Name Print Program ( Version 4 ) ..\n\n");
}

void name_function(char name[])
{
    printf("My name is %s\n\n\n", name);
}