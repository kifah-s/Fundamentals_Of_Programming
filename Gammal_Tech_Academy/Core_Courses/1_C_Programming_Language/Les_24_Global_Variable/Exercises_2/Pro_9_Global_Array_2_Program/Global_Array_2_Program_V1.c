

//* Global Array 2 Program (Version 1).

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
void updateAndPrintGlobalArrayFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    updateAndPrintGlobalArrayFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Global Array 2 Program (Version 1) ..\n\n");
}

// Update and Print global array - Function.
void updateAndPrintGlobalArrayFun()
{
    printf("Update Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        myArray[i] = myArray[i] + 2;
        printf("%d\t", myArray[i]);
    }
}
//* End Function ..
