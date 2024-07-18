

//* From 1 To Number Program (Version 1).

/*
 * Write a program that prompts the user to enter a number,
 * and prints numbers from 1 to that number using a while loop.
 */

/*
! Input:
! Please enter a number: 4

! Output:
! 1
! 2
! 3
! 4
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int n);
void printFrom1ToNumberFun(int n);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    printFrom1ToNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 1 To Number Program (Version 1) ..\n\n");
}

// Getting number / Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number: ");
    scanf("%i", &n);

    return n;
}
// Print From 1 To Number / Function.
void printFrom1ToNumberFun(int n)
{
    // Declare Variables.
    int i = 1;

    while (i <= n)
    {
        printf("\n%i", i);
        i++;
    }
}
//* End Function ..
