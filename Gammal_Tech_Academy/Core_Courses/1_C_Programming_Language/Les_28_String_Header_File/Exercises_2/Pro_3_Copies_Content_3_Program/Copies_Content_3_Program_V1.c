

//* Copies Content 3 Program (Version 1).

/*
 * Write a program that takes two strings as input,
 * and uses strcpy to copy the second string into the first string,
 * After that, print the first string.
 */

/*
! Input:
! Please Enter the first string: Hello
! Please Enter the second string: World

! Output:
! First string after coping: World
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingFirstStringFun(char firStr[]);
void gettingSecondStringFun(char SecStr[]);
void copiesContentFun(char arr1[], char arr2[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char firstString[25], secondString[25];

    // Calling Functions.
    gettingFirstStringFun(firstString);
    gettingSecondStringFun(secondString);
    copiesContentFun(firstString, secondString);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copies Content 3 Program (Version 1) ..\n\n");
}

// Getting First String - Function.
void gettingFirstStringFun(char firStr[])
{
    printf("Please Enter the first string: ");
    scanf("%s", firStr);
}

// Getting Second String - Function.
void gettingSecondStringFun(char SecStr[])
{
    printf("Please Enter the Second string: ");
    scanf("%s", SecStr);
}

// Copies Content - Function.
void copiesContentFun(char arr1[], char arr2[])
{
    strcpy(arr1, arr2);

    printf("\nFirst string after coping: %s", arr1);
}
//* End Function ..
