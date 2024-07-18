

//* Number Less 15 Program (Version 2).

/*
 * Write a program that prompts the user to enter a number less than 15,
 * The program should then print all numbers from the entered number to 15,
 * using a while loop.
 */

/*
! Input:
! Please enter a number less than 15: 9

! Output:
! 9 10 11 12 13 14 15
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
    printf("\n\nYou welcome in Number Less 15 Program (Version 2) ..\n\n");
}

// Getting number / Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number less than 15: ");
    scanf("%i", &n);

    return n;
}

// Print Numbers / Function.
void printNumbersFun(int n)
{
    printf("\n");
    while (n <= 15)
    {
        printf("%i ", n);
        n++;
    }
}
//* End Function ..
