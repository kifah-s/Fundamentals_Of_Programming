

/* >>> First Letter Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter his first name and family name and prints the first letter of his first name with the first letter of his family name. <<< */

#include <stdio.h>
#include <string.h>

int first_letter();

int main()
{
    printf("\n\nYou welcome in First Letter Program ( Version 1 ) ..\n\n");

    first_letter();

    return 0;
}

// Functions ..
// first letter function;
int first_letter()
{
    // Declaration arrays of characters;
    char name[25], f_name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", name);

    printf("Please enter your family name : ");
    scanf("%s", f_name);

    printf("\n");

    // Printing first letter;
    printf("The first letter from your name is : '%c', and the first letter from your family name is : '%c'", name[0], f_name[0]);

    printf("\n\n\n");
}