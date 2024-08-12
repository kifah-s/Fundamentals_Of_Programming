

//* Four Names Program (Version 1).

/*
 * Write a program that uses a loop to prompt the user to enter their name four times,
 * Store each name in a different row of a 2D character array x,
 * After reading all four names, print each name on a new line.
 */

/*
! Input:
! Please enter your name: kifah
! Please enter your name: ahmad
! Please enter your name: jana
! Please enter your name: rama

! Output:
! kifah
! ahmad
! jana
! rama
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesFun(char arr1[4][25]);
void printNamesFun(char arr1[4][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[4][25];

    // Calling Functions.
    gettingNamesFun(names);
    printNamesFun(names);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Four Names Program (Version 1) ..\n\n");
}

// Getting Names - Function.
void gettingNamesFun(char arr1[4][25])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Please enter your name %d: ", i + 1);
        scanf("%s", arr1[i]);
    }
}

// Print Names - Function.
void printNamesFun(char arr1[4][25])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\nName %d: %s", i + 1, arr1[i]);
    }
}
//* End Function ..
