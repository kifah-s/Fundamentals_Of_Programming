

//* Find Index Program (Version 1).

/*
 * Write a program to find the index of the element 9 in the array {3, 6, 9, 12, 15}.
 */

/*
! Output:
! Index of 9 in the array: 2
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
    int myArray[5] = {3, 6, 9, 12, 15};

    // Call Functions.
    printElementsFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Find Index Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[5])
{
    int indexOf9 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 9)
        {
            indexOf9 = i;
            // printf("Index of 9 in the array: %d", i);
            break;
        }
    }
    printf("Index of 9 in the array: %d", indexOf9);
}
//* End Function ..
