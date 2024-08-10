

//* Calculates Length 2 Program (Version 3).

/*
 * Write a program that initializes a character array name1 with the value "Hello Gammal Tech",
 * and calculates the length of the string excluding spaces using a loop,
 * Print the calculated length.
 */

/*
! Output:
! Length of the string excluding spaces: 15
*/

#include <stdio.h>

void welcomeMessageFun();
void calculatesLengthFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "Hello Gammal Tech";

    // Calling Functions.
    calculatesLengthFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculates Length 2 Program (Version 3) ..\n\n");
}

// Calculates Length - Function.
void calculatesLengthFun(char arr1[])
{
    int counter = 0;

    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] == ' ')
        {
            continue;
        }
        counter++;
    }
    printf("Length of the string excluding spaces: %d", counter);
}
//* End Function ..
