

//* Greater Than 100 Program (Version 2).

/*
 * Write a program to check if a given number is greater than 100 using boolean logic.
 */

/*
! Input:
! Please enter a number: 150

! Output:
! 150 is greater than 100.
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
    bool isGreaterThan100 = true;

    // Call Functions.
    printValueFun(number, isGreaterThan100);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 100 Program (Version 2) ..\n\n");
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
    check = (num > 100);

    return check;
}

// Print Value - Function.
void printValueFun(int num, bool check)
{
    num = gettingNumberFun(num);
    check = checkNumberFun(num, check);

    if (check)
    {
        printf("%d is Greater than 100.", num);
    }
    else
    {
        printf("%d is Not greater than 100.", num);
    }
}
//* End Function ..
