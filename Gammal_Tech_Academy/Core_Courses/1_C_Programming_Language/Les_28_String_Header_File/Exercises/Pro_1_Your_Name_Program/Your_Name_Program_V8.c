

/* >>> Your Name Program ( Version 8 ) <<< */

/* >>> A program that asks the user to enter their name into an array, their name is name and array, another empty name, user_name. I want to fill in the next array with the name the user entered (in two different ways). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
int your_name(char *name);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    your_name(name);
    
    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Your Name Program ( Version 8 ) ..\n\n");
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

// your name function;
int your_name(char *name)
{
    // Declaration arrays of characters;
    char user_name[25];

    // Copy array " name " to array " user_name ";
    for (int i = 0; i <= 25 /* or strlen(name) */; i++)
    {
        user_name[i] = name[i];
    }

    // Printing array " user_name ";
    printf("\nYour name : %s", user_name);

    printf("\n\n\n");
}