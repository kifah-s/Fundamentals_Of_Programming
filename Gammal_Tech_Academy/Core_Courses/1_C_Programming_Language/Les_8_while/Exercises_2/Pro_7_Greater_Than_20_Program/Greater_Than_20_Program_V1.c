

//* Greater Than 20 Program (Version 1).

/*
 * Write a program that prompts the user to enter a number,
 * If the entered number is greater than 20, the program should print all numbers from 20 to the entered number,
 * If the entered number is less than or equal to 20, it should print all numbers from the entered number to 20,
 * using a while loop.
 */

/*
! Input:
! Please enter a number: 25

! Output:
! 25 24 23 22 21 20
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int n);
void printNumbersFun(int n);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    printNumbersFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 20 Program (Version 1) ..\n\n");
}

// Getting number / Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number: ");
    scanf("%i", &n);

    return n;
}

// Print Numbers / Function.
void printNumbersFun(int n)
{
    if (n > 20)
    {
        while (n >= 20)
        {
            printf("%i ", n);
            n--;
        }
    }
    else
    {
        while (n <= 20)
        {
            printf("%i ", n);
            n++;
        }
    }
}
//* End Function ..
