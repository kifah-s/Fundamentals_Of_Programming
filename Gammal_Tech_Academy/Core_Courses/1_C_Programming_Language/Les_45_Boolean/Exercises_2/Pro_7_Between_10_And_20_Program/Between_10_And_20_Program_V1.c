

//* Between 10 And 20 Program (Version 1).

/*
 * Write a program to check if a given number is between 10 and 20 (inclusive) using boolean logic.
 */

/*
! Input:
! Please enter a number: 17

! Output:
! 17 is between 10 and 20 (inclusive).
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
    bool isBetween;

    // Call Functions.
    printValueFun(number, isBetween);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Between 10 And 20 Program (Version 1) ..\n\n");
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
    if (num >= 10 && num <= 20)
    {
        check = true;
    }
    else
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
        printf("%d is between 10 and 20 (inclusive).", num);
    }
    else
    {
        printf("%d is Not between 10 and 20 (inclusive).", num);
    }
}
//* End Function ..
