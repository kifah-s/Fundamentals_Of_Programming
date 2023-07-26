

/* >>> Correct Or Not Program ( Version 5 ) <<< */

/* >>> A program that asks the user for his name, and if it appears "Amr", it says correct. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int correct();

int main()
{
    welcomeMassageFun();
    correct();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Correct Or Not Program ( Version 5 ) ..\n\n");
}

// correct function;
int correct()
{
    // Declaration arrays of characters;
    char user_name[] = "Amr", name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    // Declaration variable;
    int correct = strcmp(name, user_name);

    // Checking arrays;
    if (correct == 0)
    {
        printf("\nCorrect");
    }
    else
    {
        printf("\nNot correct");
    }
    printf("\n\n\n");
}