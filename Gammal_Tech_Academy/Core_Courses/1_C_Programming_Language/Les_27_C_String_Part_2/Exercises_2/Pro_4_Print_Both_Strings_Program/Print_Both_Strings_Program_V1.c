

//* Print Both Strings Program (Version 1).

/*
 * Write a program that initializes two character arrays,
 * name1 with the value "Gammal\0Tech" and name2 with the value "Tech\0Hello",
 * Print both strings stored in name1 and name2 using the printf function.
 */

/*
! Output:
! Name1: kifah
! Name2: saloum
*/

#include <stdio.h>

void welcomeMessageFun();
void printTwoCharacterArraysFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "kifah\0saloum", name2[] = "saloum\0Hello";

    // Calling Functions.
    printTwoCharacterArraysFun(name1, name2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Both Strings Program (Version 1) ..\n\n");
}

// Print Two character arrays - Function.
void printTwoCharacterArraysFun(char arr1[], char arr2[])
{
    printf("Name 1: %s\n", arr1);
    printf("Name 2: %s", arr2);
}
//* End Function ..
