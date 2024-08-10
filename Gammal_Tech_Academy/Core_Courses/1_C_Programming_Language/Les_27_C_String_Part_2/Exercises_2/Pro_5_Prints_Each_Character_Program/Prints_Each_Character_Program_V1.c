

//* Prints Each Character Program (Version 1).

/*
 * Write a program that initializes a character array name1 with the value "GammalTech",
 * and prints each character in the array using a loop until the null terminator is encountered.
 */

/*
! Output:
! kifah
*/

#include <stdio.h>

void welcomeMessageFun();
void printsEachCharacterFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "kifah";

    // Calling Functions.
    printsEachCharacterFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Prints Each Character Program (Version 1) ..\n\n");
}

// Prints Each Character - Function.
void printsEachCharacterFun(char arr1[])
{
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        printf("%c", arr1[i]);
    }
    
}
//* End Function ..
