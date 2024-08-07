

//* Global Array 2 Program (Version 2).

/*
 * Write a program that declares a global integer array x of size 5,
 * initializes the array with default values (0 in this case),
 * and then increments each element by 2,
 * Finally, print the updated elements of the array.
 */

/*
! Output:
! Update Array elements:
! 2 2 2 2 2
*/

#include <stdio.h>

//* Global Variables ..
int myArray[5];
//* End Global Variables ..

void welcomeMessageFun();
void updateGlobalArrayFun();
void printGlobalArrayFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    updateGlobalArrayFun();
    printGlobalArrayFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Global Array 2 Program (Version 2) ..\n\n");
}

// Update global array - Function.
void updateGlobalArrayFun()
{
    for (int i = 0; i < 5; i++)
    {
        myArray[i] = myArray[i] + 2;
    }
}

// Print global array - Function.
void printGlobalArrayFun()
{
    printf("Update Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", myArray[i]);
    }
}
//* End Function ..
