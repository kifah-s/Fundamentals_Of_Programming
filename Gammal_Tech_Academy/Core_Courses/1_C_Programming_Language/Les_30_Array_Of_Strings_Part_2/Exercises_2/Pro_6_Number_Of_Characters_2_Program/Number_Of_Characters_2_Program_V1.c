

//* Number Of Characters 2 Program (Version 1).

/*
 * Write a program that declares a 2D character array to store names,
 * and initializes it with four names ("Amr", "Omar", "Ali", "Nada"),
 * Using nested loops, calculate and print the number of characters in each name along with the respective names.
 */

/*
! Output:
! Amr has 3 characters.
! Omar has 4 characters.
! Ali has 3 characters.
! Nada has 4 characters.
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void numberOfCharacters2Fun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[4][25] = {"Amr", "Omar", "Ali", "Nada"};

    // Calling Functions.
    numberOfCharacters2Fun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number Of Characters 2 Program (Version 1) ..\n\n");
}

// Number Of Characters 2 - Function.
void numberOfCharacters2Fun(char arr1[4][25])
{
    int counter = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; arr1[i][j] != '\0'; j++)
        {
            counter++;
        }
        printf("\n%s has %d characters.", arr1[i], counter);
        counter = 0;
    }
}
//* End Function ..
