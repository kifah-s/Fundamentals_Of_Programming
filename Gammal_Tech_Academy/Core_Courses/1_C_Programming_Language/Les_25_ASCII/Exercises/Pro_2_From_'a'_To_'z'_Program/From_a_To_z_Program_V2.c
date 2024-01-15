

/* >>> From 'a' To 'z' Program ( Version 2 ) <<< */

/* >>> A program prints from 'a' to 'z'. <<< */

#include <stdio.h>

void welcomeMassageFun();
int from_a_to_z();

int main()
{
    welcomeMassageFun();
    from_a_to_z();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 'a' To 'z' Program ( Version 2 ) ..\n\n");
}

// from a to z function;
int from_a_to_z()
{
    printf("The Character   In ASCII\n");
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("     %c            %d\n", i, i);
    }
    printf("\n\n");
}