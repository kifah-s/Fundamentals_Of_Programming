

//* Copy Elements Program (Version 1).

/*
 * Write a program to copy elements from the array {2, 4, 6, 8, 10} to another array.
 */

/*
! Output:
! Elements in array 2: 2 4 6 8 10
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void copyElementsFun(int arr1[5], int arr2[5]);
void printElementsFun(int arr2[5]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray1[5] = {3, 6, 9, 12, 15};
    int myArray2[5];

    // Call Functions.
    copyElementsFun(myArray1, myArray2);
    printElementsFun(myArray2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copy Elements Program (Version 1) ..\n\n");
}

// Copy Elements - Function.
void copyElementsFun(int arr1[5], int arr2[5])
{
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }
}

// Print Elements - Function.
void printElementsFun(int arr2[5])
{
    printf("Elements in array 2: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}
//* End Function ..
