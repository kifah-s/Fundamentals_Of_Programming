

//* Loop and Constant Program (Version 1).

/*
 * Write a program that uses a constant integer to control
 * a loop. Initialize the constant with a value of your choice
 * and use it to determine the number of iterations in a loop.
 * Print a simple message inside the loop.
 */

/*
! Output:
! Iteration 1: Hello, World
! Iteration 2: Hello, World
! Iteration 3: Hello, World
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printValueFun(const int cN);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Constant.
    const int loopCount = 5;

    // Call Function.
    printValueFun(loopCount);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Loop and Constant Program (Version 1) ..\n\n");
}

// Print Value - Function.
void printValueFun(const int cN)
{
    for (int i = 0; i < cN; i++)
    {
        printf("Iteration %d: Hello, World\n", i + 1);
    }
}
//* End Function ..
