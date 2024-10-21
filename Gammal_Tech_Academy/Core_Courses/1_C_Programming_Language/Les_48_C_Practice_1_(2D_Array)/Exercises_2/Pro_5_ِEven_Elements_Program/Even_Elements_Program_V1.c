

//* Even Elements Program (Version 1).

/*
 * Write a program to count the number of even elements in the array {2, 5, 8, 11, 14}.
 */

/*
! Output:
! Number of Even Elements in the array: 3
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
    int myArray[5] = {2, 5, 8, 11, 14};

    // Call Functions.
    printElementsFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even Elements Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[5])
{
    int evenElements = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenElements++;
        }
    }
    printf("Number of Even Elements in the array: %d", evenElements);
}
//* End Function ..
