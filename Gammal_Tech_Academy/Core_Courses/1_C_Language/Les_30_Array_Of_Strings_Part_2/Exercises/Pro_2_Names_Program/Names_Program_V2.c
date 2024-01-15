

/* >>> Names Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter 3 different names and prints the total number of letters of these names. <<< */

#include <stdio.h>
#include <string.h>

int names();

int main()
{
    printf("\n\nYou welcome in Names Program ( Version 2 ) ..\n\n");

    names();

    return 0;
}

// Functions ..
// names function;
int names()
{
    // Declaration array of characters, variable and counters;
    int sum = 0, i, j, number_of_names;

    // Receive values from the user;
    printf("Please enter the number of names : ");
    scanf("%d", &number_of_names);

    // Declaration array of characters;
    char name[number_of_names][15];

    // Receive values from the user;
    printf("Please enter ' %d ' names : \n");
    for (i = 0; i < number_of_names; i++)
    {
        printf("Name %d : ", i + 1);
        scanf("%s", name[i]);
    }
    printf("\n");

    // Printing sum of the letters;
    printf("The sum of the letters is : ");
    for (i = 0; i < number_of_names; i++)
    {
        for (j = 0; j < name[i][j]; j++)
        {
            sum++;
        }
    }
    printf("%d", sum);

    printf("\n\n");
}