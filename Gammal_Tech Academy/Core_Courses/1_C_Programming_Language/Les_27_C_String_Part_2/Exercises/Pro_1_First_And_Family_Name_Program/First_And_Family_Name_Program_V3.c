

/* >>> First And Family Name Program ( Version 3 ) <<< */

/* >>> A program that asks the user for his first name and family name and prints the names beside some of them, including a distance once and prints each name in a line once again. <<< */

#include <stdio.h>

void welcomeMassageFun();
char *firstNameFun();
char *familyNameFun();
int first_and_family_name(char *first_name, char *family_name);

int main()
{
    welcomeMassageFun();

    char *first_name = firstNameFun();
    char *family_name = familyNameFun();
    first_and_family_name(first_name, family_name);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First And Family Name Program ( Version 3 ) ..\n\n");
}

// get first name function;
char *firstNameFun()
{
    // Declaration arrays of characters;
    static char first_name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", first_name);

    return first_name;
}

// get family name function;
char *familyNameFun()
{
    // Declaration arrays of characters;
    static char family_name[25];

    // Receive values from the user;
    printf("Please enter your family name : ");
    scanf("%s", family_name);

    return family_name;
}

// first and family name function;
int first_and_family_name(char *first_name, char *family_name)
{
    // Printing full name;
    printf("\n%s %s ..", first_name, family_name);

    printf("\n\nfirst name : %s\nfamily name : %s", first_name, family_name);

    printf("\n\n\n");
}