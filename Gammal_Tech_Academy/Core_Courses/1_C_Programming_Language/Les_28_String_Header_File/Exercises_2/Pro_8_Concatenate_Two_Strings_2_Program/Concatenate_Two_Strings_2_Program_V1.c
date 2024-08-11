

//* Concatenate Two Strings 2 Program (Version 1).

/*
 * Write a simple program that uses the strcat function to concatenate two strings,
 * Initialize two character arrays (x and y) with different strings,
 * then concatenate the contents of x to the end of y,
 * Finally, print the resulting string storedin y.
 */

/*
! Output:
! aly amr
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void concatenateFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char x[] = " amr", y[] = "aly";

    // Calling Functions.
    concatenateFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Two Strings 2 Program (Version 1) ..\n\n");
}

// Concatenate - Function.
void concatenateFun(char arr1[], char arr2[])
{
    strcat(arr2, arr1);

    printf("%s", arr2);
}
//* End Function ..
