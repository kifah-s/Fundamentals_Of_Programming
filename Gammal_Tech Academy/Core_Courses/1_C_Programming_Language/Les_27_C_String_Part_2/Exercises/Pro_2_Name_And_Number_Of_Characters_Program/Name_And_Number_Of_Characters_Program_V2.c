

/* >>> Name And Number Of Characters Program ( Version - 2 ) <<< */

/* >>> A program that asks the user to enter his name, and prints the name along with the number of letters of the name. <<< */

#include <stdio.h>
#include <string.h>

int name_and_number_of_characters();

int main()
{
    printf("\n\nYou welcome in Name And Number Of Characters Program ( Version - 2 ) ..\n\n");

    name_and_number_of_characters();

    return 0;
}

// Functions;
int name_and_number_of_characters()
{
    // Declaration arrays of characters and variable;
    char name[25];
    int num;

    // Receive values from the user;
    printf("Please enter your first name : ");
    scanf("%s", name);

    // Checking number of characters;
    for (int i = 0; i <= name[i]; i++)
    {
        num++;
    }

    // Printing name and number of characters;
    printf("\nYour name : %s\nNumber of characters : %d", name, num);

    printf("\n\n\n");
}