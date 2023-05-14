

/* >>> From 'a' To 'z' Program <<< */

/* >>> A program prints from 'a' to 'z'. <<< */

#include <stdio.h>

int from_a_to_z();

int main()
{
    printf("\n\nYou welcome in From 'a' To 'z' Program ..\n\n");

    from_a_to_z();

    return 0;
}

// Functions;
int from_a_to_z()
{
    printf("The Character   In ASCII\n");
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("     %c            %d\n", i, i);
    }
    printf("\n\n");
}