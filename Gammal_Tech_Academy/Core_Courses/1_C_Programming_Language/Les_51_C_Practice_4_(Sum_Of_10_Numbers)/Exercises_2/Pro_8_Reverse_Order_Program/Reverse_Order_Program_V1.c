

//* Reverse Order Program (Version 1).

/*
 * Write a program that reads 6 numbers and prints the numbers in reverse order.
 */

/*
! Input:
! 1) Please enter a number: 1
! 2) Please enter a number: 2
! 3) Please enter a number: 3
! 4) Please enter a number: 4
! 5) Please enter a number: 5
! 6) Please enter a number: 6

! Output:
! numbers in revers order is: 6 5 4 3 2 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumbersFun(int arr[6]);
int printReversArrayFun(int arr[6]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int myArray[6];

    // Call Functions.
    printReversArrayFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Receive numbers - Function.
int receiveNumbersFun(int arr[6])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d) Please enter a number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Print revers array - Function.
int printReversArrayFun(int arr[6])
{
    receiveNumbersFun(arr);

    printf("\nNumbers in revers order is: ");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d  ", arr[i]);
    }
}
//* End Function ..
