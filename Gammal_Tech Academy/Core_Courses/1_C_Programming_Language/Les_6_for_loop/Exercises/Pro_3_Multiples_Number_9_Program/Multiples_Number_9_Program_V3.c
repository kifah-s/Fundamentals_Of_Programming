

/* >>> Multiples Number 9 Program ( Version 3 ) <<< */

/* >>> A program that prints multiples of 9 ( from 1 to 12 ). <<< */

#include <stdio.h>

void welcomeMassageFun();
void multiplesNumber9Fun();

int main()
{
    welcomeMassageFun();
    multiplesNumber9Fun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Multiples Number 9 Program ( Version 3 ) ..\n");
}

// Multiples Number 9 function;
void multiplesNumber9Fun()
{
    for (int i = 3; i <= 12; i = i + 3)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");
}