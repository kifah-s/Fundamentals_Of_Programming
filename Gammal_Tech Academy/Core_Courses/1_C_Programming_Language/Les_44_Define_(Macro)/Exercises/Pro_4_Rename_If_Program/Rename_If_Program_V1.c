

/* >>> Rename If Program ( Version 1 ) <<< */

/* >>> A program that changes the “ if “ to “ gammal_cond “ (by using define). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_cond if

int main()
{
    printf("\n\nYou welcome in Rename If Program ( Version 1 ) ..\n\n");

    int x = 1;
    gammal_cond(x == 1)
    {
        printf("changes the word \" if \" to \" gammal_cond \" (by using define).\n\n");
    }

    return 0;
}