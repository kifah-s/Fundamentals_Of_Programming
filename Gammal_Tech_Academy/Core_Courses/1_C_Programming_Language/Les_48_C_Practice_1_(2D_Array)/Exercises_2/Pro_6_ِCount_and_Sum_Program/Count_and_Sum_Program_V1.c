

//* Count and Sum Program (Version 1).

/*
 * Write a program to count the number of even elements,
 * and calculate their sum in the given array: {2, 5, 8, 11, 14}.
 * Print both the count and the sum as output.
 */

/*
! Output:
! Array Elements: 2 5 8 11 14
! Number of even elements in the array: 3
! Sum of even elements in the array: 24
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
    printf("\n\nYou welcome in Count and Sum Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[5])
{
    int evenElements = 0;
    int sumEvenElements = 0;

    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);

        if (arr[i] % 2 == 0)
        {
            evenElements++;
            // sumEvenElements = sumEvenElements + arr[i];
            sumEvenElements += arr[i];
        }
    }
    printf("\nNumber of Even Elements in the array: %d", evenElements);
    printf("\nSum of Even Elements in the array: %d", sumEvenElements);
}
//* End Function ..
