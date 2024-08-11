

//* Concatenate And Copy And Compares Program (Version 1).

/*
 * Write a program that uses the strcat and strcpy functions,
 * Initialize two character arrays (x and y) with different strings,
 * Use strcat to concatenate the contents of x to the end of y,
 * and then use strcpy to copy the content of y to x,
 * Finally, check if the strings x and y are equal using strcmp,
 * and print "true" if they are equal and "false" otherwise.
 */

/*
! Output:
! True.
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void concatenateFun(char arr1[], char arr2[]);
void copyFun(char arr1[], char arr2[]);
void comparesFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char x[10] = "amr", y[10] = "aly ";

    // Calling Functions.
    concatenateFun(x, y);
    copyFun(x, y);
    comparesFun(x, y);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate And Copy And Compares Program (Version 1) ..\n\n");
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
}

// Compares - Fun.
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
