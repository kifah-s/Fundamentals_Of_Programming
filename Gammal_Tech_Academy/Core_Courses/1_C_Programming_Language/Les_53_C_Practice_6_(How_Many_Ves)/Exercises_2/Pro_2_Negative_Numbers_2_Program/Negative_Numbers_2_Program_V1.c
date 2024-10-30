

//* Negative Numbers 2 Program (Version 1).

/*
 * Write a program to take user-defined numbers and count the negative ones.
 */

/*
! Input:
! Please enter the number of elements: 4
! Enter element: -2
! Enter element: -3
! Enter element: -6
! Enter element: 1

! Output:
! Number of negative numbers entered: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNumOfNegNumFun(int numOfEle, int ele, int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int numberOfElement = 0, element = 0, count = 0;

    // Call Functions.
    printNumOfNegNumFun(numberOfElement, element, count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Negative Numbers 2 Program (Version 1) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{
    printf("Please enter number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive element - Function.
int receiveElementFun(int ele, int i)
{
    printf("Please enter element %d: ", i + 1);
    scanf("%d", &ele);

    return ele;
}

// Check number - Function.
bool checkNumberFun(int ele)
{
    if (ele < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Count negative elements - Function.
int countNegativeElementsFun(int numOfEle, int ele, int cou)
{
    numOfEle = receiveNumberOfElementsFun(numOfEle);

    for (int i = 0; i < numOfEle; i++)
    {
        ele = receiveElementFun(ele, i);

        if (checkNumberFun(ele))
        {
            cou++;
        }
    }

    return cou;
}

// Print number of negative numbers - Function.
void printNumOfNegNumFun(int numOfEle, int ele, int cou)
{
    cou = countNegativeElementsFun(numOfEle, ele, cou);

    printf("\nNumber of negative numbers entered: %d", cou);
}
//* End Function ..
