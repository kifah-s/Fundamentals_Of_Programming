

//* Multiple Both 3 and 5 Program (Version 1).

/*
 * Write a program to check if a given number is a multiple of both 3 and 5 using boolean logic.
 */

/*
! Input:
! Please enter a number: 15

! Output:
! 15 is multiple of both 3 and 5.
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
    bool isMultipleBoth3And5;

    // Call Functions.
    printValueFun(number, isMultipleBoth3And5);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiple Both 3 and 5 Program (Version 1) ..\n\n");
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
    if (num % 5 == 0 && num % 3 == 0)
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
        printf("%d is multiple of both 3 and 5.", num);
    }
    else
    {
        printf("%d is Not multiple of both 3 and 5.", num);
    }
}
//* End Function ..
