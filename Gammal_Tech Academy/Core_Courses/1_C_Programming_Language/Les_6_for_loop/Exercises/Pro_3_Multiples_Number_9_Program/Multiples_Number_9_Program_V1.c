

/* >>> Multiples Number 9 Program ( Version 1 ) <<< */

/* >>> A program that prints multiples of 9 ( from 1 to 12 ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Multiples Number 9 Program ( Version 1 ) ..\n");

    int i;

    for (i = 3; i <= 12; i = i + 3)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");

    return 0;
}