

//* Numbers Are Equal Program (Version 1).

/*
 * Write a program to check if two given numbers are equal using boolean logic.
 */

/*
! Input:
! Please enter a first number: 5
! Please enter a second number: 7

! Output:
! 5 and 7 are not equal.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
bool checkNumbersFun(int firNum, int secNum, bool check);
void printValueFun(int firNum, int secNum, bool check);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int firstNumber = 0, secondNumber = 0;
    bool isEqual = true;

    // Call Functions.
    printValueFun(firstNumber, secondNumber, isEqual);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Numbers Are Equal Program (Version 1) ..\n\n");
}

// Getting First Number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a First number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Getting Second Number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a Second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Check Numbers - Function.
bool checkNumbersFun(int firNum, int secNum, bool check)
{
    if (firNum == secNum)
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
void printValueFun(int firNum, int secNum, bool check)
{
    firNum = gettingFirstNumberFun(firNum);
    secNum = gettingSecondNumberFun(secNum);

    check = checkNumbersFun(firNum, secNum, check);

    if (check == true)
    {
        printf("%d and %d are Equal.", firNum, secNum);
    }
    else
    {
        printf("%d and %d are Not Equal.", firNum, secNum);
    }
}
//* End Function ..
