

//* Updated Values Program (Version 2).

/*
 * Write a program that initializes an array of 5 integers {1, 2, 3, 4, 5},
 * increments each element of the array by 1, and then prints the updated values of the array.
 */

/*
! Output:
! Update Array Values: 2 3 4 5 6
*/

#include <stdio.h>
#include <stdbool.h>

void welcomeMessageFun();
void updateArrayValuesFun(int arr[], int len);
void printArrayFun(int arr[], int len);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array And Calculate The Length Of Array.
    int myArray[] = {1, 2, 3, 4, 5}, mtArraylength = sizeof(myArray) / sizeof(myArray[0]);

    // Update Array Value.
    updateArrayValuesFun(myArray, mtArraylength);

    // Print Array.
    printArrayFun(myArray, mtArraylength);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Updated Values Program (Version 2) ..\n\n");
}

// Update Array Values - Function.
void updateArrayValuesFun(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // arr[i] = arr[i] + 1;
        arr[i]++;
    }
}

// Print Array - Function.
void printArrayFun(int arr[], int len)
{
    printf("Update Array Values: ");

    for (int i = 0; i < len; i++)
    {
        printf("%i ", arr[i]);
    }
}

//* End Function ..
