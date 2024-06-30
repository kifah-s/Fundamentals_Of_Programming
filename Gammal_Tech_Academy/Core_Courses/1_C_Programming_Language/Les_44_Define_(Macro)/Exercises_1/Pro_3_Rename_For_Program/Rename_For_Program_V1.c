

/* >>> Rename For Program ( Version 1 ) <<< */

/* >>> A program that changes “ for “ to “ gammal_loop “ (by using define). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_loop for

int main()
{
    printf("\n\nYou welcome in Rename For Program ( Version 1 ) ..\n\n");

    gammal_loop(int i = 0; i < 2; i++)
    {
        printf("changes the word \" for \" to \" gammal_loop \" (by using define).\n\n");
    }

    return 0;
}