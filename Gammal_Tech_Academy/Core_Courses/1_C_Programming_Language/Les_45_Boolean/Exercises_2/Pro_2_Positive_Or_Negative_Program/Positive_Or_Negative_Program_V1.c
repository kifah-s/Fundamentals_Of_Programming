

//* Positive Or Negative Program (Version 1).

/*
 * Write a program to check if a given number is positive or negative using boolean logic.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! 6 is Positive.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
bool checkNumberFun(int num, bool check);
void printValueFun(int num, bool check);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int number = 0;
    bool PositiveOrNegative;

    // Call Functions.
    printValueFun(number, PositiveOrNegative);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Positive Or Negative Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
bool checkNumberFun(int num, bool check)
{
    if (num > 0)
    {
        check = true;
    }
    else if (num < 0)
    {
        check = false;
    }

    return check;
}

// Print Value - Function.
void printValueFun(int num, bool check)
{
    num = gettingNumberFun(num);
    check = checkNumberFun(num, check);

    if (check == true)
    {
        printf("%d is Positive.", num);
    }
    else
    {
        printf("%d is Negative.", num);
    }
}
//* End Function ..
