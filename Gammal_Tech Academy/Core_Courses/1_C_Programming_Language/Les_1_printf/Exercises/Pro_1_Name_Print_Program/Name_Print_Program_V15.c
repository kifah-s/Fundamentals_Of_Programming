

/* >>> Name Print Program ( Version 15 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *name_function(char name[]);

int main()
{
    char message[] = {"\n\nYou welcome in Name Print Program ( Version 15 ) ..\n\n"};
    /* printf(welcome_message(message)); */
    printf("%s",welcome_message(message));

    char name[] = {"kifah saloum"};
    printf("My name is %s\n\n\n", name_function(name));

    return 0;
}

// Functions ..

// Welcome message function;
char *welcome_message(char message[])
{
    /* printf("%s", message); */
    return message;
}

char *name_function(char name[])
{
    /* printf("My name is %s\n\n\n", name); */
    return name;
}