

/* >>> First Letter And Last Latter Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter a word, if the first letter of the word is the same as the last letter of the word printed "Same". <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
char last_latter(char *name);
int firstLatterAndLastLetterFun(char *name, char last_char);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    char last_char = last_latter(name);
    firstLatterAndLastLetterFun(name, last_char);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter And Last Latter Program ( Version 4 ) ..\n\n");
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

// last latter function;
char last_latter(char *name)
{
    // Declaration variables;
    char last_char;
    int i;

    // Check last letter;
    for (i = 0; i < name[i]; i++)
    {
        last_char = name[i];
    }

    return last_char;
}

// Check first latter and last letter function;
int firstLatterAndLastLetterFun(char *name, char last_char)
{
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