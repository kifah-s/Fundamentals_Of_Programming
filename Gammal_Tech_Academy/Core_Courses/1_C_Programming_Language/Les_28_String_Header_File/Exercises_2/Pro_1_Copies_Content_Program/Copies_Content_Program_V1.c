

//* Copies Content Program (Version 1).

/*
 * Write a program that initializes a character array x with the value "amr",
 * creates another character array y with a size of 5,
 * and copies the content of array x into array y using the strcpy function,
 * Finally, print the content of array y.
 */

/*
! Output:
! amr
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void copiesContentFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char x[] = "amr", y[5];

    // Calling Functions.
    copiesContentFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copies Content Program (Version 1) ..\n\n");
}

// Copies Content - Function.
void copiesContentFun(char arr1[], char arr2[])
{
    strcpy(arr2, arr1);

    printf("%s", arr2);
}
//* End Function ..
