

//* Global Array Program (Version 1).

/*
 * Write a program that declares a global integer array x of size 5,
 * and prints the elements of the array,
 * The program should initialize the array with default values (0 in this case),
 * and then print each element.
 */

/*
! Output:
! Array elements:
! 0 0 0 0 0 
*/

#include <stdio.h>

//* Global Variables ..
int myArray[5];
//* End Global Variables ..

void welcomeMessageFun();
void printGlobalArrayFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    printGlobalArrayFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Global Array Program (Version 1) ..\n\n");
}

// Print global array - Function.
void printGlobalArrayFun()
{
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", myArray[i]);
    }
}
//* End Function ..
