

/* >>> Names Program ( Version 1 ) <<< */

/* >>> A program with 15 names, some of them repeated and required that the user will enter a name and will be searched for if it is repeated and how many times. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getNameFun(char getName[20]);
char foundNameFun(char getName[20], char names[15][20]);

int main()
{
    welcomeMassageFun();

    char getName[20], names[15][20] = {"kifah", "salam", "kifah", "salam", "kifah",
                                       "salam", "kifah", "houda", "madal", "houda",
                                       "madal", "faraj", "reham", "hanen", "doha"};

    getName[20] = getNameFun(getName);
    /* printf("\n%s\n\n", getName); */

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