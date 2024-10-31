

//* Negative Numbers 3 Program (Version 1).

/*
 * Write a program to count the number of negative numbers in a user-defined range.
 */

/*
! Input:
! Please enter start number: -2
! Please enter end number: 3

! Output:
! Number of negative numbers int the range: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCountOfNegativeNumberFun(int cou, int strNum, int endNum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int startNumber = 0, endNumber = 0, count = 0;

    // Call Functions.
    printCountOfNegativeNumberFun(startNumber, endNumber, count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Negative Numbers 3 Program (Version 1) ..\n\n");
}

// Receive Start number - Function.
int receiveStartNumberFun(int strNum)
{
    printf("Please enter Start number: ");
    scanf("%d", &strNum);

    return strNum;
}

// Receive End number - Function.
int receiveEndNumberFun(int endNum)
{
    printf("Please enter End number: ");
    scanf("%d", &endNum);

    return endNum;
}

// Count negative number - Function.
int countNegativeNumberFun(int strNum, int endNum, int cou)
{
    strNum = receiveStartNumberFun(strNum);
    endNum = receiveEndNumberFun(endNum);

    for (int i = strNum; i <= endNum; i++)
    {
        if (i > 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print count of negative number - Function.
void printCountOfNegativeNumberFun(int strNum, int endNum, int cou)
{
    cou = countNegativeNumberFun(strNum, endNum, cou);

    printf("\nNumber of negative numbers int the range: %d", cou);
}
//* End Function ..
