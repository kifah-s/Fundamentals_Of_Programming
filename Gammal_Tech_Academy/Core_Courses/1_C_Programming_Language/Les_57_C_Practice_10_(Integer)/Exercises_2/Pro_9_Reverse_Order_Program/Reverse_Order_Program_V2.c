

//* Reverse Order Program (Version 2).

/*
 * Write a program that takes an integer as input and prints its digits in reverse order.
 */

/*
! Input:
! Please enter a number: 1598

! Output:
! Digits in Reverse Order: 8 9 5 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printReverseOrderFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    printReverseOrderFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 2) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Print Reverse Order - Function.
void printReverseOrderFun(int num)
{
    num = receiveNumberFun(num);

    printf("\nDigits in Reverse Order: ");
    while (num != 0)
    {
        printf("%d  ", num % 10);
        num = num / 10;
    }
}
//* End Function ..
