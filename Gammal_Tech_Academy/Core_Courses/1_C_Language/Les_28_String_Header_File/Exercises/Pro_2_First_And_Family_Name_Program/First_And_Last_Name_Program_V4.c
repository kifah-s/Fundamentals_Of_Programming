

/* >>> First And last Name Program ( Version 4 ) <<< */

/* >>> A program that asks the user for his first name and last name, registers each name in an array, merges the two names into one array, and prints them. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *firstNameFun();
char *lastNameFun();
int first_and_last_name(char *first_name, char *last_name);

int main()
{
    welcomeMassageFun();
    
    char *first_name = firstNameFun();
    char *last_name = lastNameFun();
    first_and_last_name(first_name, last_name);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First And last Name Program ( Version 4 ) ..\n\n");
}

// first name function;
char *firstNameFun()
{
    // Declaration arrays of characters;
    static char first_name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", first_name);

    return first_name;
}

// last name function;
char *lastNameFun()
{
    // Declaration arrays of characters;
    static char last_name[25];

    // Receive values from the user;
    printf("Please enter your last name : ");
    scanf("%s", last_name);

    return last_name;
}

// first and last name function;
int first_and_last_name(char *first_name, char *last_name)
{
    // Concatenation arrays;
    strcat(first_name, last_name);

    // Printing full name;
    printf("\nYour full name : %s", first_name);

    printf("\n\n\n");
}