

/* >>> From 'A' To 'Z' Program ( Version 1 ) <<< */

/* >>> A program prints from 'A' to 'Z'. <<< */

#include <stdio.h>

int from_A_to_Z();

int main()
{
    printf("\n\nYou welcome in From 'A' To 'Z' Program ( Version 1 ) ..\n\n");

    from_A_to_Z();

    return 0;
}

// Functions ..
// from A to Z function;
int from_A_to_Z()
{
    printf("The Character   In ASCII\n");
    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf("     %c            %d\n", i, i);
    }
    printf("\n\n");
}