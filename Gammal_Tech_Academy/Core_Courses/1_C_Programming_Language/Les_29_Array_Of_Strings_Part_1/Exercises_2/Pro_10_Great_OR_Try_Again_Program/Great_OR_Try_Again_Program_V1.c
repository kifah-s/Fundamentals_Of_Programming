

//* Great OR Try Again Program (Version 1).

/*
 * Write a program that prompts the user to enter the names and degrees of four individuals,
 * After receiving the input, the program should analyze the degrees and print a message for each individual,
 * If the degree is greater than 90, the program should print "great", otherwise, it should print "try again".
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
! Degrees Analysis:
! kifah, degree: 95 --> great
! ahmad, degree: 92 --> great
! jana, degree: 85 --> try again
! rama, degree: 80 --> try again
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
    printf("\n\nYou welcome in Great OR Try Again Program (Version 1) ..\n\n");
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
    printf("\nDegrees Analysis:");

    for (int i = 0; i < 4; i++)
    {
        if (arr2[i] > 90)
        {
            printf("\n%s, Your degree: %d --> Great", arr1[i], arr2[i]);
        }
        else
        {
            printf("\n%s, Your degree: %d --> Try Again", arr1[i], arr2[i]);
        }
    }
}
//* End Function ..
