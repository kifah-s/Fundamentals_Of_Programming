

/* >>> First And last Name Program ( Version 1 ) <<< */

/* >>> A program that asks the user for his first name and last name, registers each name in an array, merges the two names into one array, and prints them. <<< */

#include <stdio.h>
#include <string.h>

int first_and_last_name();

int main()
{
    printf("\n\nYou welcome in First And last Name Program ( Version 1 ) ..\n\n");

    first_and_last_name();

    return 0;
}

// Functions ..
// first and last name function;
int first_and_last_name()
{
    // Declaration arrays of characters;
    char first_name[25], last_name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", first_name);

    printf("Please enter your last name : ");
    scanf("%s", last_name);

    // Concatenation arrays;
    strcat(first_name, last_name);

    // Printing full name;
    printf("\nYour full name : %s", first_name);

    printf("\n\n\n");
}