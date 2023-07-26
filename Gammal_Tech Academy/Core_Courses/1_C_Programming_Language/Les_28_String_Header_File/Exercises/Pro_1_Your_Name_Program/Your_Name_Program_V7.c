

/* >>> Your Name Program ( Version 7 ) <<< */

/* >>> A program that asks the user to enter their name into an array, their name is name and array, another empty name, user_name. I want to fill in the next array with the name the user entered (in two different ways). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int your_name();

int main()
{
    welcomeMassageFun();
    your_name();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Your Name Program ( Version 7 ) ..\n\n");
}

// your name function;
int your_name()
{
    // Declaration arrays of characters;
    char name[25], user_name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    // Copy array " name " to array " user_name ";
    for (int i = 0; i <= 25 /* or strlen(name) */; i++)
    {
        user_name[i] = name[i];
    }

    // Printing array " user_name ";
    printf("\nYour name : %s", user_name);

    printf("\n\n\n");
}