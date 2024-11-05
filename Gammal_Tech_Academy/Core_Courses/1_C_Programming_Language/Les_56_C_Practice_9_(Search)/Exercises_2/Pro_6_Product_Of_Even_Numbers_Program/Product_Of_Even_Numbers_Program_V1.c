

//* Product Of Even Numbers Program (Version 1).

/*
 * Write a program to calculate the product of even numbers in an array.
 */

/*
! Input:
! Please enter the number of elements: 4
! 1) Please enter number: 12
! 2) Please enter number: 2
! 3) Please enter number: 3
! 4) Please enter number: 5

! Output:
! Product Of Even Numbers: 24
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberOfElementsFun(int numOfEle);
void printResultFun(int numOfEle, int arr[], int pro);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int numberOfElements = 0, productOfEvenNumbers = 1;

    // Call Functions.
    numberOfElements = receiveNumberOfElementsFun(numberOfElements);

    // Declare Arrays.
    int myNumbers[numberOfElements];

    // Call Functions.
    printResultFun(numberOfElements, myNumbers, productOfEvenNumbers);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Product Of Even Numbers Program (Version 1) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{

    printf("Please enter the number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive numbers - Function.
void receiveNumbersFun(int numOfEle, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d) Please enter a number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Product even numbers - Function.
int productEvenNumbersFun(int numOfEle, int arr[], int pro)
{
    for (int i = 0; i < numOfEle; i++)
    {
        if (arr[i] % 2 == 0)
        {
            pro = pro * arr[i];
        }
    }

    return pro;
}

// Print result - Function.
void printResultFun(int numOfEle, int arr[], int pro)
{
    receiveNumbersFun(numOfEle, arr);
    pro = productEvenNumbersFun(numOfEle, arr, pro);

    printf("\nProduct Of Even Numbers: %d", pro);
}
//* End Function ..
