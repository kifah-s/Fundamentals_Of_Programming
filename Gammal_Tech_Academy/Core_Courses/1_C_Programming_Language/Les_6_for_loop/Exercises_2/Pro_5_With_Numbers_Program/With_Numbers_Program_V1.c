

//* With Numbers Program (Version 1).

/*
 * Write a program using a for loop to print the message "Hello Gammal Tech" with numbers.
 */

/*
! Output:
! 1. Hello Gammal Tech
! 2. Hello Gammal Tech
! 3. Hello Gammal Tech
! 4. Hello Gammal Tech
! 5. Hello Gammal Tech
*/

#include <stdio.h>

void welcomeMessageFun();
void printManyTimesFun();

int main()
{
    welcomeMessageFun();
    printManyTimesFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in With Numbers Program (Version 1) ..\n\n");
}

// Print many times function.
void printManyTimesFun()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%i. Hello Gammal Tech\n", i + 1);
    }
}
//* End Function ..
