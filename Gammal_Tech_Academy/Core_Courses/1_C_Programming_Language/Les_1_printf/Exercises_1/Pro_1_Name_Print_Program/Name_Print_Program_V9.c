

/* >>> Name Print Program ( Version 9 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *name_function(char name[]);

int main()
{
    char message[] = {"\n\nYou welcome in Name Print Program ( Version 9 ) ..\n\n"};
    welcome_message(message);
    char *wel[] = {message};
    printf(*wel);

    char name[] = {"kifah saloum"};
    name_function(name);
    char *n[] = {name};
    printf("My name is %s\n\n\n", *n);

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