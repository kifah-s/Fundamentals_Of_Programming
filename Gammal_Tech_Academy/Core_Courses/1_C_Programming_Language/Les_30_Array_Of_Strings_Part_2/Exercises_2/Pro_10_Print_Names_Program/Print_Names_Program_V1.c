

//* Print Names Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using a loop, print the names that start with the letter 'A'.
 */

/*
! Output:
! Amr
! Ali
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printNameFun(char arr1[4][5]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][5] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    printNameFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Names Program (Version 1) ..\n\n");
}

// Print Names - Function.
void printNameFun(char arr1[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        if (arr1[i][0] == 'A')
        {
            printf("%s\n", arr1[i]);
        }
    }
}
//* End Function ..
