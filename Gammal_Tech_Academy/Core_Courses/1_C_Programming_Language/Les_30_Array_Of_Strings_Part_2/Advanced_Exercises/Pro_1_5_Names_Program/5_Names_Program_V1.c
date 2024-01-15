

/* >>> 5 Names Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter 5 names and prints each name along with the number of its letters (In two different ways). <<< */

#include <stdio.h>
#include <string.h>

int names();

int main()
{
    printf("\n\nYou welcome in 5 Names Program ( Version 1 ) ..\n\n");

    names();

    return 0;
}

// Functions ..
// names function;
int names()
{
    // Declaration array, counters and variable;
    char names[5][25];
    int i, j, num = 0;

    // Receive values from the user;
    printf("Please enter 5 names : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", names[i]);
    }

    printf("\n-------------------\n\n");

    // Printing names;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < names[i][j]; j++)
        {
            num++;
        }
        printf("The name : ' %s ', Character count : %d\n", names[i], num);
        num = 0;
    }

    printf("\n\n");
}