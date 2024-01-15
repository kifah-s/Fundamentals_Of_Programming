

/* >>> Week Days Program ( Version 5 ) <<< */

/* >>> Program arranges weekdays and prints them as numbers. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void printingNumberFun();

int main()
{
    welcomeMassageFun();

    printingNumberFun();

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Week Days Program ( Version 5 ) ..\n\n");
}

// Printing number function;
void printingNumberFun()
{
    enum week
    {
        sat = 1,
        sun,
        mon,
        tue,
        wed,
        thu,
        fri
    };

    for (int i = sat; i <= fri; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
}
