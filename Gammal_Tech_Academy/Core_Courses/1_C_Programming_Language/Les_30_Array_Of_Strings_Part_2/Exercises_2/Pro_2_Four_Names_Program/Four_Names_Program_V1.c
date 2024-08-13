

//* Four Names Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using a loop, print each name on a new line.
 */

/*
! Output:
! Name 1: Amr
! Name 2: Omar
! Name 3: Ali
! Name 4: Nada
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printNamesFun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    printNamesFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Four Names Program (Version 1) ..\n\n");
}

// Print Names - Function.
void printNamesFun(char arr1[4][25])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\nName %d: %s", i + 1, arr1[i]);
    }
}
//* End Function ..
