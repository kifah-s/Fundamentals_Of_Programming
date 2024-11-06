

//* Negative Numbers 2 Program (Version 3).

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
int receiveNumberOfElementsFun(int numOfEle);
void printNumOfNegNumFun(int numOfEle, int myEle[], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int numberOfElement = 0, count = 0;

    // Call Functions.
    numberOfElement = receiveNumberOfElementsFun(numberOfElement);

    // Declare Array.
    int myElement[numberOfElement];

    // Call Functions.
    printNumOfNegNumFun( numberOfElement,  myElement,  count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Negative Numbers 2 Program (Version 3) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{
    printf("Please enter number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive element - Function.
int receiveElementFun(int numOfEle, int myEle[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("Please enter element %d: ", i + 1);
        scanf("%d", &myEle[i]);
    }
}

// Count negative elements - Function.
int countNegativeElementsFun(int numOfEle, int myEle[], int cou)
{
    receiveElementFun(numOfEle, myEle);

    for (int i = 0; i < numOfEle; i++)
    {
        if (myEle[i] < 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print number of negative numbers - Function.
void printNumOfNegNumFun(int numOfEle, int myEle[], int cou)
{
    cou = countNegativeElementsFun(numOfEle, myEle, cou);

    printf("\nNumber of negative numbers entered: %d", cou);
}
//* End Function ..