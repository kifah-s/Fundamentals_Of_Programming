

//* First Characters Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using a loop, print the first character of each name on a new line.
 */

/*
! Output:
! A
! O
! A
! N
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printFirstCharactersFun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    printFirstCharactersFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First Characters Program (Version 1) ..\n\n");
}

// First Characters - Function.
void printFirstCharactersFun(char arr1[4][25])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", arr1[i][0]);
    }
}
//* End Function ..
