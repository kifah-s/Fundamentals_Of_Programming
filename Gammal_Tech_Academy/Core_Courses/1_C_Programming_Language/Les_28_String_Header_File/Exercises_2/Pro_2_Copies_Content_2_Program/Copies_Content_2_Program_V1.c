

//* Copies Content 2 Program (Version 1).

/*
 * Write a program that uses strcpy to copy a string from one array to another and then prints the copied string.
 */

/*
! Output:
! Copied String: Copy me.
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
    char x[] = "Copy me.", y[25];

    // Calling Functions.
    copiesContentFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copies Content 2 Program (Version 1) ..\n\n");
}

// Copies Content - Function.
void copiesContentFun(char arr1[], char arr2[])
{
    strcpy(arr2, arr1);

    printf("Copied String: %s", arr2);
}
//* End Function ..
