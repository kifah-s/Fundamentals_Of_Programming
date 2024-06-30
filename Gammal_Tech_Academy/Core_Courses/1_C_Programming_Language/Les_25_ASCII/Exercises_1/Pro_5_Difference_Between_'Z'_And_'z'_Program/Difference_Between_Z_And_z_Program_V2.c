

/* >>> Difference Between 'Z' And 'z' Program ( Version 2 ) <<< */

/* >>> A program prints the difference between 'Z' and 'z'. <<< */

#include <stdio.h>

void welcomeMassageFun();
int diff_bet_Z_and_z();

int main()
{
    welcomeMassageFun();
    diff_bet_Z_and_z();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Difference Between 'Z' And 'z' Program ( Version 2 ) ..\n\n");
}

// diff bet Z and z function;
int diff_bet_Z_and_z()
{
    char Z = 'Z';
    char z = 'z';

    printf("The Character   In ASCII\n");
    printf("     Z             %d\n", Z);
    printf("     z             %d", z);
    printf("\n\n");
}