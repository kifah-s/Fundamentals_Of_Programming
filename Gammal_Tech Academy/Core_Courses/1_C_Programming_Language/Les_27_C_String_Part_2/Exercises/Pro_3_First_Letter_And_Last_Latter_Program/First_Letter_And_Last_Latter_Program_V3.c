

/* >>> First Letter And Last Latter Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a word, if the first letter of the word is the same as the last letter of the word printed "Same". <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
int first_latter_and_last_latter(char *name);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    first_latter_and_last_latter(name);
    
    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter And Last Latter Program ( Version 3 ) ..\n\n");
}

// get name function;
char *getNameFun()
{
    // Declaration arrays of characters;
    static char name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    return name;
}

// first latter and last latter function;
int first_latter_and_last_latter(char *name)
{
    // Declaration variables;
    char last_char;
    int i;

    // Check last letter;
    for (i = 0; i < name[i]; i++)
    {
        last_char = name[i];
    }

    // Check first latter and last letter;
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