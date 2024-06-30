

/* >>> First Letter Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter his first name and family name and prints the first letter of his first name with the first letter of his family name. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int first_letter();

int main()
{
    welcomeMassageFun();
    first_letter();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter Program ( Version 3 ) ..\n\n");
}

// first letter function;
int first_letter()
{
    // Declaration arrays of characters;
    char name[25], f_name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", name);

    printf("Please enter your family name %s: ", name);
    scanf("%s", f_name);

    printf("\n");

    // Printing first letter;
    printf("The first letter from your name is : '%c'\n", name[0]);
    printf("The first letter from your family name is : '%c'", f_name[0]);

    printf("\n\n\n");
}