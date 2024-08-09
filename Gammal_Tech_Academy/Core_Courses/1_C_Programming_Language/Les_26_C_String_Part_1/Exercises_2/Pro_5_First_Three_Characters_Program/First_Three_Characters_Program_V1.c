

//* First Three Characters Program (Version 1).

/*
 * Write a program that prompts the user to enter their name,
 * stores it in a character array, and then prints the first three characters of the entered name,
 * Note that the name must contain at least 3 characters.
 */

/*
! Input:
! Please enter your name: kifah

! Output:
! First three characters: k i f
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNameFun(char arr[25]);
void printFirstThreeCharactersFun(char arr[25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name[25];

    // Calling Functions.
    gettingNameFun(name);
    printFirstThreeCharactersFun(name);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First Three Characters Program (Version 1) ..\n\n");
}

// Getting name - Function.
void gettingNameFun(char arr[25])
{
    printf("Please enter your name: ");
    scanf("%s", arr);
}

// Print first three characters - Function.
void printFirstThreeCharactersFun(char arr[25])
{
    printf("\nFirst three characters: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c ", arr[i]);
    }
}

//* End Function ..
