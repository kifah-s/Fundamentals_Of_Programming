

/* >>> Name And Number Of Characters Program ( Version 7 ) <<< */

/* >>> A program that asks the user to enter his name, and prints the name along with the number of letters of the name. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
int numberOfCharactersFun(char *name);
int name_and_number_of_characters(char *name, int num);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    int num = numberOfCharactersFun(name);
    name_and_number_of_characters(name, num);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name And Number Of Characters Program ( Version 7 ) ..\n\n");
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

// Count the number of characters function;
int numberOfCharactersFun(char *name)
{
    // Declaration variable;
    int num = 0;

    // Checking number of characters;
    for (int i = 0; i <= name[i]; i++)
    {
        num++;
    }

    return num;
}

// name and number of characters function;
int name_and_number_of_characters(char *name, int num)
{
    // Printing name and number of characters;
    printf("\nYour name : %s\nNumber of characters : %d", name, num);

    printf("\n\n\n");
}