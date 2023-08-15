

/* >>> Rename Scanf Program ( Version 1 ) <<< */

/* >>> A program that changes the “ scanf “ to “ gammal_read “ (by using define). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_read scanf

int main()
{
    printf("\n\nYou welcome in Rename Scanf Program ( Version 1 ) ..\n\n");

    int num = 0;
    printf("Please enter a number : ");
    gammal_read("%d", &num);
    printf("\n%d\n\n", num);

    printf("changes the word \" scanf \" to \" gammal_read \" (by using define).\n\n");

    return 0;
}