

/* >>> From 'A' To 'Z' Program ( Version 2 ) <<< */

/* >>> A program prints from 'A' to 'Z'. <<< */

#include <stdio.h>

void welcomeMassageFun();
int from_A_to_Z();

int main()
{
    welcomeMassageFun();
    from_A_to_Z();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 'A' To 'Z' Program ( Version 2 ) ..\n\n");
}

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