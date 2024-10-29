

//* Asterisks Triangle Program (Version 1).

/*
 * Write a program to print a triangle pattern using asterisks (*), with the base size of 5.
 */

/*
! Output:
! *
! **
! ***
! ****
! *****

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printAsterisksTriangleFun(int s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int size = 5;

    // Call Functions.
    printAsterisksTriangleFun(size);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Asterisks Triangle Program (Version 1) ..\n\n");
}

// Print Asterisks Triangle - Function.
void printAsterisksTriangleFun(int s)
{
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*", s);
        }
        printf("\n");
    }
}
//* End Function ..
