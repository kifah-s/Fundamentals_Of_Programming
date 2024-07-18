

//* Numbers Are Equal Program (Version 1).

/*
 * Write a program that prompts the user to enter two different numbers,
 * The program should print all numbers from the smaller number to the larger,
 * number if num1 == num2 print this message Numbers are equal using a while loop.
 */

/*
! Input:
! Please enter first number: 5
! Please enter second number: 5

! Output:
! Numbers are equal
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void checkNumberFun(int firNum, int secNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables,
    int firstNumber = 0, secondNumber = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    checkNumberFun(firstNumber, secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Numbers Are Equal Program (Version 1) ..\n\n");
}

// Getting First Number / Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter first number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second Number / Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Check Number / Function.
void checkNumberFun(int firNum, int secNum)
{
    if (firNum < secNum)
    {
        printf("\n");
        // Print From Smaller To Larger.
        while (firNum <= secNum)
        {
            printf("%i ", firNum);
            firNum++;
        }
    }
    else if (firNum > secNum)
    {
        printf("\n");
        // Print From Smaller To Larger.
        while (secNum <= firNum)
        {
            printf("%i ", secNum);
            secNum++;
        }
    }
    else
    {
        printf("\nNumbers are equal.");
    }
}
//* End Function ..
