

//* From Smaller To Larger Program (Version 1).

/*
 * Write a program that prompts the user to enter two different numbers,
 * The program should print all numbers from the smaller number to the larger number,
 * using a do...while loop.
 */

/*
! Input:
! Please enter the first number: 5
! Please enter the second number: 9

! Output:
! 5 6 7 8 9
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void checkAndPrintNumberFun(int firNum, int secNum);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);

    checkAndPrintNumberFun(firstNumber, secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From Smaller To Larger Program (Version 1) ..\n\n");
}

// Getting First Number / Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter the First number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second Number / Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter the Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Check and print Number / Function.
void checkAndPrintNumberFun(int firNum, int secNum)
{
    if (firNum < secNum)
    {
        printf("\n");
        do
        {
            printf("%i ", firNum);
            firNum++;
        } while (firNum <= secNum);
    }
    else
    {
        printf("\n");
        do
        {
            printf("%i ", secNum);
            secNum++;
        } while (secNum <= firNum);
    }
}
//* End Function ..
