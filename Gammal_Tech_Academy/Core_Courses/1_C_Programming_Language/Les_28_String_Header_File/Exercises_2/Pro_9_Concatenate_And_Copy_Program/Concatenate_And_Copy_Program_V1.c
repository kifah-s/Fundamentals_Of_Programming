

//* Concatenate And Copy Program (Version 1).

/*
 * Write a program that uses the strcat and strcpy functions,
 * Initialize two character arrays (x and y) with different strings,
 * Use strcat to concatenate the contents of x to the end of y,
 * and then use strcpy to copy the content of y to x,
 * Finally, print the resulting string stored in x.
 */

/*
! Output:
! aly amr
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void concatenateFun(char arr1[], char arr2[]);
void copyFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char x[] = " amr", y[] = "aly";

    // Calling Functions.
    concatenateFun(x, y);
    copyFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate And Copy Program (Version 1) ..\n\n");
}

// Concatenate - Function.
void concatenateFun(char arr1[], char arr2[])
{
    strcat(arr2, arr1);
}

// Copy - Function.
void copyFun(char arr1[], char arr2[])
{
    strcpy(arr1, arr2);

    printf("%s", arr1);
}
//* End Function ..
