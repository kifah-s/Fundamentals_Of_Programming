

/* >>> Phone Number Program ( Version 15 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

char *welcome_massage();
char *close_friends();
char *friends();

int main()
{
    char *wel_mas[] = {welcome_massage()};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *clo_fri[] = {close_friends()};
    /* printf(*clo_fri); */
    printf("%s", *clo_fri);

    char *fri[] = {friends()};
    /* printf(*fri); */
    printf("%s", *fri);

    /* printf(*fri); */
    printf("%s", *fri);

    /* printf(*fri); */
    printf("%s", *fri);

    /* printf(*fri); */
    printf("%s", *fri);

    /* printf(*fri); */
    printf("%s", *fri);

    printf("\n\n");

    return 0;
}

// Functions ..

// Welcome massage function;
char *welcome_massage()
{
    char *wel_mas[] = {"\n\nYou welcome in Phone Number Program ( Version 15 ) ..\n\n"};

    return *wel_mas;
}

// close friends function;
char *close_friends()
{
    char *clo_fri[] = {"My close friends and their phone numbers they :\n"};

    return *clo_fri;
}

// Friends function;
char *friends()
{
    char *fri[] = {"- kifah : 0998621421\n"};

    return *fri;
}