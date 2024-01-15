

/* >>> Rename Printf Program ( Version 1 ) <<< */

/* >>> A program that changes “ printf “ to “ gammal_show “ (by using define). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_show printf

int main()
{
    gammal_show("\n\nYou welcome in Rename Printf Program ( Version 1 ) ..\n\n");

    gammal_show("changes the word \" printf \" to \" gammal_show \" (by using define).\n\n");

    return 0;
}