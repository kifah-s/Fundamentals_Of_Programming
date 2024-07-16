

//* The Larger Program (Version 3).

/*
 * Write a program that prompts the user to enter two numbers and then prints the larger of the two.
 */

/*
! Input:
! Please enter first number: 5
! Please enter second number: 6

! Output:
! The larger number is: 6
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void largerNumberFun(int firNum, int secNum, int larNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, largerNumber = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    largerNumberFun(firstNumber, secondNumber, largerNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in The Larger Program (Version 3) ..\n\n");
}

// Getting First number function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter first number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second number function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Larger number function.
void largerNumberFun(int firNum, int secNum, int larNum)
{
    if (firNum > secNum)
    {
        larNum = firNum;
    }
    else
    {
        larNum = secNum;
    }

    printf("\nThe larger number is: %i", larNum);
}
//* End Function ..
