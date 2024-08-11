

//* Concatenate Two Strings Program (Version 1).

/*
 * Write a simple program that uses the strcat function to concatenate two strings,
 * Initialize two character arrays (x and y) with different strings,
 * then concatenate the contents of y to the end of x,
 * Finally, print the resulting string stored in x.
 */

/*
! Output:
! amr aly
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
    char x[] = "amr ", y[] = "aly";

    // Calling Functions.
    concatenateFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Two Strings Program (Version 1) ..\n\n");
}

// Concatenate - Function.
void concatenateFun(char arr1[], char arr2[])
{
    strcat(arr1, arr2);

    printf("%s", arr1);
}
//* End Function ..
