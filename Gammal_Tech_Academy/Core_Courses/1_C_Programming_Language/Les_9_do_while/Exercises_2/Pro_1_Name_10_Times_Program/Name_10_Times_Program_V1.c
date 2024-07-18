

//* Name 10 Times Program (Version 1).

/*
 * Write a program that prints a person's name 10 times using a do...while loop.
 */

/*
! Output:
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
! Person's Name.
*/

#include <stdio.h>

void welcomeMessageFun();
void printNameFun(char n[]);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    char myName[] = "Kifah Salloum";

    printNameFun(myName);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Name 10 Times Program (Version 1) ..\n\n");
}

// Print Name / Function.
void printNameFun(char n[])
{
    // Declare Variables.
    int i = 0;

    do
    {
        printf("%s\n", n);
        i++;
    } while (i < 10);
}
//* End Function ..
