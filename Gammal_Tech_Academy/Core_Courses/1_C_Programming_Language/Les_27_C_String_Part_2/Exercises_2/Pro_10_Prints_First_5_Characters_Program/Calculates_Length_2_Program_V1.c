

//* Prints First 5 Characters Program (Version 1).

/*
 * Write a program that initializes a character array name1 with the value "Hello Gammal Tech",
 * and prints the first 5 characters of the string.
 */

/*
! Output:
! Hello
*/

#include <stdio.h>

void welcomeMessageFun();
void printsFirst5CharactersFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "Hello Gammal Tech";

    // Calling Functions.
    printsFirst5CharactersFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Prints First 5 Characters Program (Version 1) ..\n\n");
}

// Prints First 5 Characters - Function.
void printsFirst5CharactersFun(char arr1[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%c", arr1[i]);
    }
}
//* End Function ..
