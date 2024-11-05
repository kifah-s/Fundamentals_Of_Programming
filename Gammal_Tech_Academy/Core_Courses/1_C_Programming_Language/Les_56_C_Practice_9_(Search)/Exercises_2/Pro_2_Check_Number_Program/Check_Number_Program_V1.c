

//* Check Number Program (Version 1).

/*
 * Write a program to check if a number exists in a given set of numbers.
 */

/*
! Input:
! Please enter the number of elements: 3
! Please enter the number to search: 2
! 1) Please enter number: 1
! 2) Please enter number: 3
! 3) Please enter number: 2

! Output:
! Number Found.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void foundNumberOrNotFun(int numOfEle, int numToSea, int num, bool che);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int numberOfElements = 0, numberToSearch = 0, number = 0;
    bool found = false;

    // Call Functions.
    foundNumberOrNotFun(numberOfElements, numberToSearch, number, found);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Check Number Program (Version 1) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{
    printf("Please enter the number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive number to search - Function.
int receiveNumberToSearchFun(int numToSea)
{
    printf("Please enter the number to search: ");
    scanf("%d", &numToSea);

    return numToSea;
}

// Receive numbers - Function.
bool receiveNumbersFun(int numOfEle, int numToSea, int num, bool che)
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d) Please enter a number: ", i + 1);
        scanf("%d", &num);

        if (num == numToSea)
        {
            che = true;
        }
    }

    return che;
}

// Found number or not - Function.
void foundNumberOrNotFun(int numOfEle, int numToSea, int num, bool che)
{
    numOfEle = receiveNumberOfElementsFun(numOfEle);
    numToSea = receiveNumberToSearchFun(numToSea);
    che = receiveNumbersFun(numOfEle, numToSea, num, che);

    if (che == true)
    {
        printf("\nNumber Found");
    }
    else
    {
        printf("\nNumber Not Found");
    }
}
//* End Function ..
