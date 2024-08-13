

//* Reverse Order Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using a loop, print each name on a new line in reverse order (starting from "Nada" and ending with "Amr").
 */

/*
! Output:
! Nada
! Ali
! Omar
! Amr
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void reverseOrderFun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    reverseOrderFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Reverse Order - Function.
void reverseOrderFun(char arr1[4][25])
{
    for (int i = 3; i >= 0; i--)
    {
        printf("%s\n", arr1[i]);
    }
}
//* End Function ..
