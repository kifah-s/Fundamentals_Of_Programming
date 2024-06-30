

/* >>> Names Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter 3 different names and prints the total number of letters of these names. <<< */

#include <stdio.h>
#include <string.h>

int names();

int main()
{
    printf("\n\nYou welcome in Names Program ( Version 1 ) ..\n\n");

    names();

    return 0;
}

// Functions ..
// names function;
int names()
{
    // Declaration array of characters, variable and counters;
    char name[3][20];
    int sum = 0, i, j;

    // Receive values from the user;
    printf("Please enter 3 names : \n");
    for (i = 0; i < 3; i++)
    {
        printf("Name %d : ", i + 1);
        scanf("%s", name[i]);
    }
    printf("\n");

    // Printing sum of the letters;
    printf("The sum of the letters is : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < name[i][j]; j++)
        {
            sum++;
        }
    }
    printf("%d", sum);

    printf("\n\n");
}