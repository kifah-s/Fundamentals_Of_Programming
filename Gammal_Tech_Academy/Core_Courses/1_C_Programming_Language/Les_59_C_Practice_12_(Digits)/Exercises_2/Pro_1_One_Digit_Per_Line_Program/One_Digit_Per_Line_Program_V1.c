

//* One Digit Per Line Program (Version 1).

/*
 * Write a program that takes a number as input and prints each digit in reverse order, one digit per line.
 */

/*
! Input:
! Please enter a number: 156

! Output:
! 1
! 5
! 6
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printOneDigitPerLineFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    printOneDigitPerLineFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in One Digit Per Line Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Print One Digit Per Line - Function.
void printOneDigitPerLineFun(int num)
{
    num = receiveNumberFun(num);

    while (num)
    {
        int dig = num % 10;
        printf("%d\n", dig);
        num = num / 10;
    }
}
//* End Function ..
