

//* From 1 To 8 Program (Version 1).

/*
 * Write a program that prompts the user to enter a number from 1 to 8,
 * and prints the number alongside its name.
 */

/*
! Input:
! Please enter a number (1 - 8): 5

! Output:
! 5 - Five.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    checkNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 1 To 8 Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number (1 - 8): ");
    scanf("%i", &num);

    return num;
}

// Check number - Function.
void checkNumberFun(int num)
{
    switch (num)
    {
    case 1:
        printf("\n%i - One.", num);
        break;

    case 2:
        printf("\n%i - Two.", num);
        break;

    case 3:
        printf("\n%i - Three.", num);
        break;

    case 4:
        printf("\n%i - Four.", num);
        break;

    case 5:
        printf("\n%i - Five.", num);
        break;

    case 6:
        printf("\n%i - Six.", num);
        break;

    case 7:
        printf("\n%i - Seven.", num);
        break;

    case 8:
        printf("\n%i - Eight.", num);
        break;

    default:
        printf("\nInvalid number.", num);
    }
}
//* End Function ..
