

//* Positive Or Negative Program.

//* Write a program that asks the user to enter an integer and then prints whether that number is positive or negative.

/*
! Input:
! Enter an integer: 5

! Output:
! 5 is positive number.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void positiveOrNegativeNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare variable.
    int number = 0;

    number = gettingNumberFun(number);
    positiveOrNegativeNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Positive Or Negative Program ..\n\n");
}

// Getting number function.
int gettingNumberFun(int num)
{
    printf("Please enter an integer: ");
    scanf("%i", &num);

    return num;
}

// positive or negative number function.
void positiveOrNegativeNumberFun(int num)
{
    if (num > 0)
    {
        printf("\n%i is Positive number.", num);
    }
    else if (num < 0)
    {
        printf("\n%i is Negative number.", num);
    }
}
//* End Function ..
