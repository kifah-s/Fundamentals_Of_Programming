

//* Even Or Odd Program (Version 1).

/*
 * Write a program that asks the user to enter an integer,
 * and then prints whether that number is even or odd.
 */

/*
! Input:
! Please enter an integer: 5

! Output:
! 5 is an odd number

*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void evenOrOddNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 0;

    number = gettingNumberFun(number);
    evenOrOddNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program (Version 1) ..\n\n");
}

// Getting number function.
int gettingNumberFun(int num)
{
    printf("Please Enter an intger: ");
    scanf("%i", &num);

    return num;
}

// Ever or odd number function.
void evenOrOddNumberFun(int num)
{

    if (num % 2 == 0)
    {
        printf("\n%i is an Even number", num);
    }
    else
    {
        printf("\n%i is an Odd number", num);
    }
}

//* End Function ..
