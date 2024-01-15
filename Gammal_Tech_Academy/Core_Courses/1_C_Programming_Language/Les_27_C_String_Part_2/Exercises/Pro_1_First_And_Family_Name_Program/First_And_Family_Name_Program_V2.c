

/* >>> First And Family Name Program ( Version 2 ) <<< */

/* >>> A program that asks the user for his first name and family name and prints the names beside some of them, including a distance once and prints each name in a line once again. <<< */

#include <stdio.h>

void welcomeMassageFun();
int first_and_family_name();

int main()
{
    welcomeMassageFun();
    first_and_family_name();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First And Family Name Program ( Version 2 ) ..\n\n");
}

// first and family name function;
int first_and_family_name()
{
    // Declaration arrays of characters;
    char first_name[25], family_name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", first_name);

    printf("Please enter your family name : ");
    scanf("%s", family_name);

    // Printing full name;
    printf("\n%s %s ..", first_name, family_name);

    printf("\n\nfirst name : %s\nfamily name : %s", first_name, family_name);

    printf("\n\n\n");
}