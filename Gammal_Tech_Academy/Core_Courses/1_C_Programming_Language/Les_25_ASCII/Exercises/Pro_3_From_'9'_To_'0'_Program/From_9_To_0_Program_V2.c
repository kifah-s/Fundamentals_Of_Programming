

/* >>> From '9' To '0' Program ( Version 2 ) <<< */

/* >>> A program prints from '9' to '0'. <<< */

#include <stdio.h>

void welcomeMassageFun();
int from_9_to_0();

int main()
{
    welcomeMassageFun();
    from_9_to_0();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From '9' To '0' Program ( Version 2 ) ..\n\n");
}

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