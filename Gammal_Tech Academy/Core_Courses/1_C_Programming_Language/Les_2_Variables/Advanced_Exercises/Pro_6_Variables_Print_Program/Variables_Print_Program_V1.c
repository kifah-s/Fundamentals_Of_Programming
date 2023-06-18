

/* >>> Variables Print Program ( Version 1 ) <<< */

/* >>> Now you know how to assigns a number in a variable, but let's do this better.
Required : Write a program that assigns a number in one variable and another number in another variable and prints the two variables between them with a + sign, then print their sum at the end. Example x + y = 15. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Variables Print Program ( Version 1 ) ..\n\n");

    int x = 5,
        y = 5,
        result = x + y;

    printf("x + y = %d\n\n\n", result);

    return 0;
}