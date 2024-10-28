

//* Greater Than 90 Program (Version 1).

/*
 * Write a program that uses a loop to prompt the user to enter their name and degree four times,
 * Store each name in a different row of a 2D character array name,
 * and each degree in a separate integer array degree,
 * After reading all four names and degrees,
 * print only those names along with their corresponding degrees where the degree is greater than 90.
 */

/*
! Input:
! Please enter your name: kifah
! Please enter your degree: 95
! Please enter your name: ahmad
! Please enter your degree: 92
! Please enter your name: jana
! Please enter your degree: 85
! Please enter your name: rama
! Please enter your degree: 80

! Output:
! Names withe degrees greater than 90:
! kifah, degree: 95
! ahmad, degree: 92
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesAndDegreesFun(char arr1[4][25], int arr2[4]);
void printNamesAndDegreesFun(char arr1[4][25], int arr2[4]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[4][25];
    int degrees[4];

    // Calling Functions.
    gettingNamesAndDegreesFun(names, degrees);
    printNamesAndDegreesFun(names, degrees);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 90 Program (Version 1) ..\n\n");
}

// Getting Names And Degrees - Function.
void gettingNamesAndDegreesFun(char arr1[4][25], int arr2[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Please enter your name %d: ", i + 1);
        scanf("%s", arr1[i]);

        printf("Please enter your degree %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
}

// Print Names And Degrees - Function.
void printNamesAndDegreesFun(char arr1[4][25], int arr2[4])
{
    printf("\nNames withe degrees greater than 90:");

    for (int i = 0; i < 4; i++)
    {
        if (arr2[i] > 90)
        {
            printf("\n%s, Your degree: %d", arr1[i], arr2[i]);
        }
    }
}
//* End Function ..