

/* >>> Name Print Program ( Version 3 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

void welcome_message();
void name_function(char name[]);

int main()
{
    welcome_message();
    name_function("kifah saloum");

    return 0;
}

// Functions ..

// Welcome message function;
void welcome_message()
{
    printf("\n\nYou welcome in Name Print Program ( Version 3 ) ..\n\n");
}

void name_function(char name[])
{
    printf("My name is %s\n\n\n", name);
}