

//* Reverse Order 2 Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using nested loops, print each name in reverse order (from the last character to the first) on a single line.
 */

/*
! Output:
! rmA
! ramO
! ilA
! adaN
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void reverseOrder2Fun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    reverseOrder2Fun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order 2 Program (Version 1) ..\n\n");
}

// Reverse Order 2 - Function.
void reverseOrder2Fun(char arr1[4][25])
{
    for (int i = 0; i < 4; i++)
    {
        int length = strlen(arr1[i]);
        // int length = strlen(arr1[i]) - 1;
        // printf("%d\n", length);

        for (int j = length; j >= 0; j--)
        {
            printf("%c", arr1[i][j]);
        }
        printf("\n");
    }
}
//* End Function ..
