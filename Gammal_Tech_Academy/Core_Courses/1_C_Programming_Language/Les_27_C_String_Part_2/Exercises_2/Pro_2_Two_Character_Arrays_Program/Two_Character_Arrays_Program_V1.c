

//* Two Character Arrays Program (Version 1).

/*
 * Write a C program that initializes two character arrays,
 * name1 with the value "Gammal" and name2 with the value "Tech",
 * Print both strings together.
 */

/*
! Output:
! Full Name: kifah saloum
*/

#include <stdio.h>

void welcomeMessageFun();
void printTwoCharacterArraysFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "kifah", name2[] = "saloum";

    // Calling Functions.
    printTwoCharacterArraysFun(name1, name2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Character Arrays Program (Version 1) ..\n\n");
}

// Print character array - Function.
void printTwoCharacterArraysFun(char arr1[], char arr2[])
{
    printf("Full Name: %s %s", arr1, arr2);
}
//* End Function ..
