

/* >>> First Letter Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter his first name and family name and prints the first letter of his first name with the first letter of his family name. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
char *getFamilyNameFun(char *name);
int first_letter(char *name, char *f_name);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    char *f_name = getFamilyNameFun(name);
    first_letter(name, f_name);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter Program ( Version 4 ) ..\n\n");
}

// get name function;
char *getNameFun()
{
    // Declaration arrays of characters;
    static char name[25];

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", name);

    return name;
}

// get family name function;
char *getFamilyNameFun(char *name)
{
    // Declaration arrays of characters;
    static char f_name[25];

    printf("Please enter your family name %s: ", name);
    scanf("%s", f_name);
    printf("\n");

    return f_name;
}

// first letter function;
int first_letter(char *name, char *f_name)
{
    // Printing first letter;
    printf("The first letter from your name is : '%c'\n", name[0]);
    printf("The first letter from your family name is : '%c'", f_name[0]);

    printf("\n\n\n");
}