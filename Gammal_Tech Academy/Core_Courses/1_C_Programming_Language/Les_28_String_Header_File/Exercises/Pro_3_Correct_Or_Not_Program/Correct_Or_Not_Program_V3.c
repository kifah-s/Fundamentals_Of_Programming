

/* >>> Correct Or Not Program ( Version 3 ) <<< */

/* >>> A program that asks the user for his name, and if it appears "Amr", it says correct. <<< */

#include <stdio.h>
#include <string.h>

int correct();

int main()
{
    printf("\n\nYou welcome in Correct Or Not Program ( Version 3 ) ..\n\n");

    correct();

    return 0;
}

// Functions ..
// correct function;
int correct()
{
    // Declaration arrays of characters;
    char name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    // Checking arrays;
    if (strcmp(name, "Amr") == 0)
    {
        printf("\nCorrect");
    }
    else
    {
        printf("\nNot correct");
    }
    printf("\n\n\n");
}