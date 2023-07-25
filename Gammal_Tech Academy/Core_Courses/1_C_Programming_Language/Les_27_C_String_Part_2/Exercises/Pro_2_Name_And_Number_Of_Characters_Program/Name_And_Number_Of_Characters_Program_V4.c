

/* >>> Name And Number Of Characters Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter his name, and prints the name along with the number of letters of the name. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
int name_and_number_of_characters();

int main()
{
    welcomeMassageFun();

    name_and_number_of_characters();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name And Number Of Characters Program ( Version 4 ) ..\n\n");
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
int name_and_number_of_characters()
{
    char *name = getNameFun();
    
    // Printing name and number of characters;
    printf("\nYour name : %s\nNumber of characters : %d", name, strlen(name));

    printf("\n\n\n");
}