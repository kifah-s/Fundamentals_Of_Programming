

/* >>> Name And Number Of Characters Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter his name, and prints the name along with the number of letters of the name. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
int name_and_number_of_characters(char *name);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    name_and_number_of_characters(name);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name And Number Of Characters Program ( Version 3 ) ..\n\n");
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

// name and number of characters function;
int name_and_number_of_characters(char *name)
{
    // Printing name and number of characters;
    printf("\nYour name : %s\nNumber of characters : %d", name, strlen(name));

    printf("\n\n\n");
}