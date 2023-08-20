

/* >>> From A To Z Program ( Version 1 ) <<< */

/* >>> A program printing letters from A : Z time and from a : z <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char from_A_To_Z_Fun();
char from_a_To_z_Fun();

int main()
{
    welcomeMassageFun();

    from_A_To_Z_Fun();
    from_a_To_z_Fun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From A To Z Program ( Version 1 ) ..\n\n");
}

// From A to Z function;
char from_A_To_Z_Fun()
{
    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf("%c\n", i);
    }
    printf("\n\n");
}

// From a to z function;
char from_a_To_z_Fun()
{
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c\n", i);
    }
    printf("\n\n");
}