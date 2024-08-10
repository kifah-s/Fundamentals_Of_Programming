

//* Calculates Length Program (Version 1).

/*
 * Write a program that initializes a character array name1 with the value "GammalTech",
 * and calculates the length of the string (excluding the null terminator) using a loop,
 *  Print the calculated length.
 */

/*
! Output:
! Length of the string: 10
*/

#include <stdio.h>

void welcomeMessageFun();
void calculatesLengthFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "GammalTech";

    // Calling Functions.
    calculatesLengthFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculates Length Program (Version 1) ..\n\n");
}

// Calculates Length - Function.
void calculatesLengthFun(char arr1[])
{
    int counter = 0;

    for (int i = 0; arr1[i] != '\0'; i++)
    {
        counter++;
    }
    printf("Length of the string: %d", counter);
}
//* End Function ..
