

/* >>> Your Name Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter their name into an array, their name is name and array, another empty name, user_name. I want to fill in the next array with the name the user entered (in two different ways). <<< */

#include <stdio.h>
#include <string.h>

int your_name();

int main()
{
    printf("\n\nYou welcome in Your Name Program ( Version 6 ) ..\n\n");

    your_name();

    return 0;
}

// Functions ..
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