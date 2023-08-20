

/* >>> Names Program ( Version 1 ) <<< */

/* >>> A program with a 15 name array of them that are frequent and what is required is that the user will enter a name in any form and in erratic letters you should count that repetition of that name in the array. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getNameFun(char getName[20]);
char changeUpperToLowerForInputFun(char getName[20]);
char changeUpperToLowerForArrayFun(char names[15][20]);
char foundNameFun(char getName[20], char names[15][20]);

int main()
{
    welcomeMassageFun();

    char getName[20], names[15][20] = {"Kifah", "Salam", "KIFAH", "SALAM", "Kifah",
                                       "Salam", "Kifah", "Houda", "Madal", "HOUDA",
                                       "MADAL", "Faraj", "Reham", "Hanen", "Doha"};

    getName[20] = getNameFun(getName);
    /* printf("\n%s\n\n", getName); */

    changeUpperToLowerForInputFun(getName);
    /* printf("\n%s\n\n", getName); */

    changeUpperToLowerForArrayFun(names);
    /* for (int i = 0; i < 15; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\n\n"); */

    foundNameFun(getName, names);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Names Program ( Version 1 ) ..\n\n");
}

// Get name function;
char getNameFun(char getName[20])
{
    printf("Please enter name: ");
    scanf("%s", getName);
}

// Change uppercase letters to lowercase for "user input";
char changeUpperToLowerForInputFun(char getName[20])
{
    for (int i = 0; i <= getName[i]; i++)
    {
        if (getName[i] >= 'A' && getName[i] <= 'Z')
        {
            getName[i] = getName[i] + 32;
        }
    }
}

// Change uppercase letters to lowercase for "Array";
char changeUpperToLowerForArrayFun(char names[15][20])
{
    for (int i = 0; i <= 15; i++)
    {
        for (int j = 0; j < names[i][j]; j++)
        {
            if (names[i][j] >= 'A' && names[i][j] <= 'Z')
            {
                names[i][j] = names[i][j] + 32;
            }
        }
    }
}

// Found name function;
char foundNameFun(char getName[20], char names[15][20])
{
    int counter = 0;
    for (int i = 0; i < 15; i++)
    {
        if (strcmp(getName, names[i]) == 0)
        {
            counter++;
        }
    }
    if (counter > 0)
    {
        printf("\nYes,The name entered is duplicated %d times ..\n\n", counter);
    }
    else
    {
        printf("\nNO,The name entered is not repeated ..\n\n");
    }
}