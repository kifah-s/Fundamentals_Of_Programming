

//* Copies And Compares Program (Version 1).

/*
 * Write a simple program that uses the strcpy function,
 * to copy a string from one character array (x) to another character array (y),
 * After copying, compare the contents of the two arrays using the strcmp function,
 * If the strings are equal, print "true", otherwise, print "false."
 */

/*
! Output:
! True.
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void copiesFun(char arr1[], char arr2[]);
void comparesFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char x[] = "Hello", y[25];

    // Calling Functions.
    copiesFun(x, y);
    comparesFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copies And Compares Program (Version 1) ..\n\n");
}

// Copies - Function.
void copiesFun(char arr1[], char arr2[])
{
    strcpy(arr2, arr1);
}

// Compares - Function.
void comparesFun(char arr1[], char arr2[])
{
    int result = strcmp(arr1, arr2);

    if (result == 0)
    {
        printf("True.");
    }
    else
    {
        printf("False.");
    }
}
//* End Function ..
