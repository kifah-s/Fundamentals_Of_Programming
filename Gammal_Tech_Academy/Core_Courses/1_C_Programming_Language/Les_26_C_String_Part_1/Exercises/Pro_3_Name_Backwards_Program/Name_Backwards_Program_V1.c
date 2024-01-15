

/* >>> Name Backwards Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter his name and prints his name vice versa. <<< */

#include <stdio.h>
#include <string.h>

int name_backwards();

int main()
{
    printf("\n\nYou welcome in Name Backwards Program ( Version 1 ) ..\n\n");

    name_backwards();

    return 0;
}

// Functions ..
// name backwards function;
int name_backwards()
{
    // Declaration array of characters;
    char name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    printf("\n");

    // Name reversed;
    for (int i = strlen(name); i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    printf("\n\n\n");
}