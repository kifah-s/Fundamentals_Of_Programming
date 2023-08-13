

/* >>> Week Days Reverse Program ( Version 5 ) <<< */

/* >>> The program arranges weekdays vice versa (means Friday Day remains 1 and Saturday Day remains 7) and prints them as numbers. <<< */

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
    printf("\n\nYou welcome in Week Days Reverse Program ( Version 5 ) ..\n\n");
}

// Printing number function;
void printingNumberFun()
{
    enum week
    {
        fri = 1,
        thu,
        wed,
        tue,
        mon,
        sun,
        sat = 7
    };

    for (int i = sat; i >= fri; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
}
