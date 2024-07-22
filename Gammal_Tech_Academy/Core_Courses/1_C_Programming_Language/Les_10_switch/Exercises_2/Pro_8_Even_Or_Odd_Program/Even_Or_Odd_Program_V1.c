

//* Even Or Odd Program (Version 1).

/*
 * Write a program to input a number and check whether it is even or odd.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! 5 is Odd.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void everOrOddFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    everOrOddFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Even Or Odd - Function.
void everOrOddFun(int num)
{
    switch (num % 2 == 0)
    {
    case 1:
        printf("\n%i is Even.", num);
        break;

    case 0:
        printf("\n%i is Odd.", num);
        break;
    }
}
//* End Function ..
