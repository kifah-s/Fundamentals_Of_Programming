

/* >>> From '9' To '0' Program ( Version 1 ) <<< */

/* >>> A program prints from '9' to '0'. <<< */

#include <stdio.h>

int from_9_to_0();

int main()
{
    printf("\n\nYou welcome in From '9' To '0' Program ( Version 1 ) ..\n\n");

    from_9_to_0();

    return 0;
}

// Functions ..
// from 9 to 0 function;
int from_9_to_0()
{
    printf("The Number   In ASCII\n");
    for (int i = '9'; i >= '0'; i--)
    {
        printf("    %c           %d\n", i, i);
    }
    printf("\n\n");
}