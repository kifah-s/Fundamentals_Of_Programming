

//* Number Of Characters Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using nested loops, calculate and print the total number of characters in all the names.
 */

/*
! Output:
! Total number of characters in all name: 14
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void numberOfCharactersFun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    numberOfCharactersFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number Of Characters Program (Version 1) ..\n\n");
}

// Second Characters - Function.
void numberOfCharactersFun(char arr1[4][25])
{
    int counter = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; arr1[i][j] != '\0'; j++)
        {
            counter++;
        }
    }
    printf("\nTotal number of characters in all name: %d", counter);
}
//* End Function ..
