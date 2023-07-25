

/* >>> First And Family Name Program ( Version 2 ) <<< */

/* >>> A program that asks the user for his first name and family name and prints the names side by side, including distance. <<< */

#include <stdio.h>

int first_and_family_name();

int main()
{
    printf("\n\nYou welcome in First And Family Name Program ( Version 2 ) ..\n\n");

    first_and_family_name();

    return 0;
}

// Functions ..
// first and family name function
int first_and_family_name()
{
    // Declaration array of characters;
    char first_name[20], family_name[20];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", first_name);

    printf("Please enter your family name %s : ", first_name);
    scanf("%s", family_name);

    // Printing full name;
    printf("\n Hello %s %s ..", first_name, family_name);

    printf("\n\n\n");
}