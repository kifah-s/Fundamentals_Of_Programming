

//* Reverse Elements Program (Version 1).

/*
 * Write a program to reverse the elements of the array {1, 2, 3, 4, 5}.
 */

/*
! Output:
! Reversed array : 5 4 3 2 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printElementsFun(int arr[5]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[5] = {1, 2, 3, 4, 5};

    // Call Functions.
    printElementsFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Elements Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[5])
{
    printf("Reversed array: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
//* End Function ..
