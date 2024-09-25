

//* Character Array and Constant Program (Version 1).

/*
 * Write a program that declares a constant character
 * array to store a string. Initialize the constant character
 * array with your name and print the string.
 */

/*
! Output:
! Name: kifah saloum
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printNameFun(const char myArr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Constant Array.
    const char myArray[] = {"kifah saloum"};

    // Call Function.
    printNameFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Character Array and Constant Program (Version 1) ..\n\n");
}

// Print Name - Function.
void printNameFun(const char myArr[])
{
    printf("Name: %s", myArr);
}
//* End Function ..
