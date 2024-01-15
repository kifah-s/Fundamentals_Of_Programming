

/* >>> Sum First 10 Numbers Program ( Version 2 ) <<< */

/* >>> A program to find the sum of the first 10 numbers. <<< */

#include <stdio.h>

void welcomeMassageFun();
int sumFirst10Numbers();

int main()
{
    welcomeMassageFun();
    sumFirst10Numbers();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum First 10 Numbers Program ( Version 2 ) ..\n\n");
}

// Sum First 10 Numbers function;
int sumFirst10Numbers()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("\n%d", sum);
    }
    printf("\nTotal is : %d\n\n\n", sum);
}