

/* >>> Any Small Any Capital Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a name and the program converts any small letter into capital and any capital letter into small. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getNameFun(char name[25]);
char capitalToSmallAndSmallToCapitalFun(char name[25]);

int main()
{
    welcomeMassageFun();

    char name[25];
    name[25] = getNameFun(name);
    // printf("\n%s\n\n", name);


    capitalToSmallAndSmallToCapitalFun(name);
    printf("\n%s\n\n", name);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Small Any Capital Program ( Version 2 ) ..\n\n");
}

// Get name function;
char getNameFun(char name[25])
{
    printf("Please enter your name: ");
    scanf("%s", name);
}

// Change capital to small and change small to capital function;
char capitalToSmallAndSmallToCapitalFun(char name[25])
{
    for (int i = 0; i < name[i]; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
        else
        {
            name[i] -= 32;
        }
    }
    // printf("\n%s\n\n", name);
}