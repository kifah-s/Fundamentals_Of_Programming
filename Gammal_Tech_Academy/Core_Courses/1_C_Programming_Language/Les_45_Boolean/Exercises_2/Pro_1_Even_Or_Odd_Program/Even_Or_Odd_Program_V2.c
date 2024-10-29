

//* Even Or Odd Program (Version 2).

/*
 * Write a program to check if a given number is even or odd using boolean logic.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! 5 is Odd. 
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
    bool evenOrOdd;

    // Call Functions.
    printValueFun(number, evenOrOdd);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program (Version 2) ..\n\n");
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
    check = (num % 2 == 0);

    return check;
}

// Print Value - Function.
void printValueFun(int num, bool check)
{
    num = gettingNumberFun(num);
    check = checkNumberFun(num, check);

    if (check)
    {
        printf("%d is Even.", num);
    }
    else
    {
        printf("%d is Odd.", num);
    }
}
//* End Function ..
