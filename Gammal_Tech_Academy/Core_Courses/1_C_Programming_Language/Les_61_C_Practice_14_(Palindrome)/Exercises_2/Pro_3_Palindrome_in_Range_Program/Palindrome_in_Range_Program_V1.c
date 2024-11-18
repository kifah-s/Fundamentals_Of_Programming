

//* Palindrome in Range Program (Version 1).

/*
 * Create a program to find the count of palindrome numbers in a given range.
 */

/*
! Input:
! Please Enter a Range Start: 50
! Please Enter a Range End: 70

! Output:
! 55 is a palindrome.
! 66 is a palindrome.
! Total palindrome: 2.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int checkNumbersOfRangeFun(int ranSta, int ranEnd);

int main()
{
    // Declare Variables.
    int rangeStart = 0, rangeEnd = 0;

    // Call Functions.
    checkNumbersOfRangeFun(rangeStart, rangeEnd);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome in Range Program (Version 1) ..\n\n");
}

// Receive Range Start - Function.
int receiveRangeStartFun(int ranSta)
{
    printf("Please Enter a Range Start: ");
    scanf("%d", &ranSta);

    return ranSta;
}

// Receive Range End - Function.
int receiveRangeEndFun(int ranEnd)
{
    printf("Please Enter a Range End: ");
    scanf("%d", &ranEnd);

    return ranEnd;
}

// Check Numbers Of Range - Function.
int checkNumbersOfRangeFun(int ranSta, int ranEnd)
{
    welcomeMessageFun();
    ranSta = receiveRangeStartFun(ranSta);
    ranEnd = receiveRangeEndFun(ranEnd);

    int dig = 0, counter = 0;
    for (int i = ranSta; i <= ranEnd; i++)
    {
        int tempNum = i, revNum = 0;

        while (tempNum)
        {
            dig = tempNum % 10;
            revNum = (revNum * 10) + dig;
            tempNum = tempNum / 10;

            if (i == revNum)
            {
                printf("%d is a Palindrome\n", i);
                counter++;
            }
        }
    }

    printf("Total Palindrome: %d\n\n", counter);
}
//* End Function ..
