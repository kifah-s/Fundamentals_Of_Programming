

/* >>> Name Print Program ( Version 14 ) <<< */

/* >>> A program that prints your name on the screen <<< */

#include <stdio.h>

char *welcome_message(char message[]);
char *name_function(char name[]);

int main()
{
    char message[] = {"\n\nYou welcome in Name Print Program ( Version 14 ) ..\n\n"};
    welcome_message(message);
    /* printf(message); */
    printf("%s", message);

    char name[] = {"kifah saloum"};
    name_function(name);
    printf("My name is %s\n\n\n", name);

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