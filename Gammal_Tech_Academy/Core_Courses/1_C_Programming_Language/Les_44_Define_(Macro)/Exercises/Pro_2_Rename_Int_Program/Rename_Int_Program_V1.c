

/* >>> Rename Int Program ( Version 1 ) <<< */

/* >>> A program that changes the word “ int “ to “ gammal_num “ (by using define). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

#define gammal_num int

int main()
{
    printf("\n\nYou welcome in Rename Int Program ( Version 1 ) ..\n\n");

    gammal_num num = 10;
    printf("%d\n\n", num);

    printf("changes the word \" int \" to \" gammal_num \" (by using define).\n\n");

    return 0;
}