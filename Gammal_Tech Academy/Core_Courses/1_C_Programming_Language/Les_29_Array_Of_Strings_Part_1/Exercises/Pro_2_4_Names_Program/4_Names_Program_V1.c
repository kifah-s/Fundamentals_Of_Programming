

/* >>> 4 Names Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter 4 different names and prints them from the fourth name to the first name. <<< */

#include <stdio.h>
#include <string.h>

int names();

int main()
{
    printf("\n\nYou welcome in 4 Names Program ( Version 1 ) ..\n\n");

    names();

    return 0;
}

// Functions ..
// names function;
int names()
{
    // Declaration array of characters;
    char name[4][15];

    // Receive values from the user;
    printf("Please enter 4 names : \n");
    for (int i = 0; i < 4; i++)
    {
        printf("Name %d : ", i + 1);
        scanf("%s", name[i]);
    }
    printf("\n");

    // Printing names;
    printf("The names is : \n");
    for (int i = 3; i >= 0; i--)
    {
        printf("%d : ", i + 1);
        printf("%s", name[i]);
        printf("\n");
    }

    printf("\n\n");
}