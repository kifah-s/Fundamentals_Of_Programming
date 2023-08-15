

/* >>> Rename Return 0 Program ( Version 1 ) <<< */

/* >>> A program that changes “ return 0 “ to “ gammal_r “ (by using define). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_r return 0

int main()
{
    printf("\n\nYou welcome in Rename Return 0 Program ( Version 1 ) ..\n\n");

    printf("changes the word \" return 0 \" to \" gammal_r \" (by using define).\n\n");

    gammal_r;
}