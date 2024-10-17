

//* Maximum Numbers Program (Version 2).

/*
 * Find the maximum of two numbers using the ternary operator.
 */

/*
! Input:
! Please enter a first number: 5
! Please enter a second number: 7

! Output:
! The Maximum number is 7.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int num);
int gettingSecondNumberFun(int secNum);
void checkNumbersFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Call Functions.
    checkNumbersFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum Numbers Program (Version 2) ..\n\n");
}

// Getting first Number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Getting second Number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Check Number - Function.
void checkNumbersFun()
{
    int firNum = gettingFirstNumberFun(firNum);
    int secNum = gettingSecondNumberFun(secNum);

    // (firNum > secNum) ? printf("\nThe Maximum number is %d.", firNum) : printf("\nThe Maximum number is %d.", secNum);

    int max = (firNum > secNum) ? firNum : secNum;
    printf("\nThe Maximum number is %d.", max);
}

//* End Function ..
