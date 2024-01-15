

/* >>> Week Days Reverse Program ( Version 4 ) <<< */

/* >>> The program arranges weekdays vice versa (means Friday Day remains 1 and Saturday Day remains 7) and prints them as numbers. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void printingNumberFun(int x, int y);

int main()
{
    welcomeMassageFun();
    
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

    printingNumberFun(sat, fri);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Week Days Reverse Program ( Version 4 ) ..\n\n");
}

// Printing number function;
void printingNumberFun(int x, int y)
{
    for (int i = x; i >= y; i--)
    {
        printf("\n%d", i);
    }
    printf("\n\n");
}
