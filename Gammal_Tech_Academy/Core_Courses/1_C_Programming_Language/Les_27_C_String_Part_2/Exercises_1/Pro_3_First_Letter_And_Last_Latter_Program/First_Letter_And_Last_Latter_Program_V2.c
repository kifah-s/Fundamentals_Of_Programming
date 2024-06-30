

/* >>> First Letter And Last Latter Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a word, if the first letter of the word is the same as the last letter of the word printed "Same". <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int first_latter_and_last_latter();

int main()
{
    welcomeMassageFun();
    first_latter_and_last_latter();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter And Last Latter Program ( Version 2 ) ..\n\n");
}

// first latter and last latter function;
int first_latter_and_last_latter()
{
    // Declaration arrays of characters and variables;
    char name[25], last_char;
    int i;

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    // Check first latter and last letter;
    for (i = 0; i < name[i]; i++)
    {
        last_char = name[i];
    }

    if (name[0] == last_char)
    {
        printf("\nThe first latter 'SAME' last latter");
    }
    else
    {
        printf("\nThe first latter 'NOT SAME' last latter");
    }

    printf("\n\n\n");
}