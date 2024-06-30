

/* >>> Week Days Program ( Version 4 ) <<< */

/* >>> Program arranges weekdays and prints them as numbers. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void printingNumberFun(int x, int y);

int main()
{
    welcomeMassageFun();

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

    printingNumberFun(sat, fri);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Week Days Program ( Version 4 ) ..\n\n");
}

// Printing number function;
void printingNumberFun(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
}
