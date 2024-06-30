

/* >>> Correct Or Not Program ( Version 6 ) <<< */

/* >>> A program that asks the user for his name, and if it appears "Amr", it says correct. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *nameFromUserFun();
int correct(char *name);

int main()
{
    welcomeMassageFun();

    char *name = nameFromUserFun();
    correct(name);
    
    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Correct Or Not Program ( Version 6 ) ..\n\n");
}

// get name from user function;
char *nameFromUserFun()
{
    // Declaration arrays of characters;
    static char name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    return name;
}

// correct function;
int correct(char *name)
{
    // Declaration arrays of characters;
    char user_name[] = "Amr";

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