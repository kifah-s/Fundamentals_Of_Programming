

//* Names And Ages Program (Version 1).

/*
 * Write a program that uses a loop to prompt the user to enter their name and age four times,
 * Store each name in a different row of a 2D character array name and each age in a separate integer array age,
 * After reading all four names and ages, print each name along with its corresponding age on a new line.
 */

/*
! Input:
! Please enter your name: kifah
! Please enter your age: 24
! Please enter your name: ahmad
! Please enter your age: 27
! Please enter your name: jana
! Please enter your age: 22
! Please enter your name: rama
! Please enter your age: 21

! Output:
! kifah, age: 24
! ahmad, age: 27
! jana, age: 22
! rama, age: 21
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesAndAgesFun(char arr1[4][25], int arr2[4]);
void printNamesAndAgesFun(char arr1[4][25], int arr2[4]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[4][25];
    int ages[4];

    // Calling Functions.
    gettingNamesAndAgesFun(names, ages);
    printNamesAndAgesFun(names, ages);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Names And Ages Program (Version 1) ..\n\n");
}

// Getting Names And Ages - Function.
void gettingNamesAndAgesFun(char arr1[4][25], int arr2[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Please enter your name %d: ", i + 1);
        scanf("%s", arr1[i]);

        printf("Please enter your age %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
}

// Print Names And Ages - Function.
void printNamesAndAgesFun(char arr1[4][25], int arr2[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("\n%s, Your age: %d", arr1[i], arr2[i]);
    }
}
//* End Function ..
