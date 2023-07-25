

/* >>> Difference Between 'A' And 'a' Program ( Version 1 ) <<< */

/* >>> A program prints the difference between 'A' and 'a'. <<< */

#include <stdio.h>

int diff_bet_A_and_a();

int main()
{
    printf("\n\nYou welcome in Difference Between 'A' And 'a' Program ( Version 1 ) ..\n\n");

    diff_bet_A_and_a();

    return 0;
}

// Functions ..
// diff bet A and a function;
int diff_bet_A_and_a()
{
    char A = 'A';
    char a = 'a';

    printf("The Character   In ASCII\n");
    printf("     A             %d\n", A);
    printf("     a             %d", a);
    printf("\n\n");
}