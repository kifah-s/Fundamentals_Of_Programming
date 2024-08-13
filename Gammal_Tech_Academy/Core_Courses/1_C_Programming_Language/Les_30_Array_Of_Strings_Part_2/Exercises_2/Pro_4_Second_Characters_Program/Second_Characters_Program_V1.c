

//* Second Characters Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using a loop, print the ASCII value of the second character of each name on a new line.
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
void printSecondCharactersFun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    printSecondCharactersFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Second Characters Program (Version 1) ..\n\n");
}

// Second Characters - Function.
void printSecondCharactersFun(char arr1[4][25])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr1[i][1]);
    }
}
//* End Function ..
