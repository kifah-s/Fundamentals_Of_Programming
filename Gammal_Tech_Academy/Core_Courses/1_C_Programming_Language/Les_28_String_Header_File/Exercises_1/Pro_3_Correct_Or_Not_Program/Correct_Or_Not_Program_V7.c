

/* >>> Correct Or Not Program ( Version 7 ) <<< */

/* >>> A program that asks the user for his name, and if it appears "Amr", it says correct. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *nameFromUserFun();
int checkingFun(char *name);
int correctFun(int correct);

int main()
{
    welcomeMassageFun();

    char *name = nameFromUserFun();
    int correct = checkingFun(name);
    correctFun(correct);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Correct Or Not Program ( Version 7 ) ..\n\n");
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

// Checking user name and name function;
int checkingFun(char *name)
{
    // Declaration arrays of characters;
    char user_name[] = "Amr";

    // Declaration variable;
    int correct = strcmp(name, user_name);

    return correct;
}

// correct function;
int correctFun(int correct)
{
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