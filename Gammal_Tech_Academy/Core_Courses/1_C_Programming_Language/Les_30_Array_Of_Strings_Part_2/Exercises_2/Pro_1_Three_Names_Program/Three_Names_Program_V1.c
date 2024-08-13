

//* Three Names Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with three names ("Amr", "Omar", "Ali"),
 * Without using a loop, print each name on a new line.
 */

/*
! Output:
! Name 1: Amr
! Name 2: Omar
! Name 3: Ali
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printNamesFun(char arr1[3][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[3][25] = {"Amr", "Omar", "Ali"};

    // Calling Functions.
    printNamesFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Names Program (Version 1) ..\n\n");
}

// Print Names - Function.
void printNamesFun(char arr1[3][25])
{
    printf("\nName 1: %s", arr1[0]);
    printf("\nName 2: %s", arr1[1]);
    printf("\nName 3: %s", arr1[2]);
}
//* End Function ..
