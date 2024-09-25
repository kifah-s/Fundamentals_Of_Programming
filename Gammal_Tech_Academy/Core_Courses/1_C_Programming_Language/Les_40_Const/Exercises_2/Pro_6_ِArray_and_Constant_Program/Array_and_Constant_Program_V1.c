

//* Array and Constant Program (Version 1).

/*
 * Write a program that declares an array of integers and
 * uses a constant integer to define the size of the array.
 * Initialize the array with values of your choice and print each element.
 */

/*
! Output:
! Element 1: 10
! Element 2: 20
! Element 3: 30
! Element 4: 40
! Element 5: 50
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void printValueFun(const int constS, int myArr[constS]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Constant.
    const int arraySize = 5;

    // Declare Array.
    int myArray[arraySize];

    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Call Function.
    printValueFun(arraySize, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array and Constant Program (Version 1) ..\n\n");
}

// Print Value - Function.
void printValueFun(const int constS, int myArr[constS])
{
    for (int i = 0; i < constS; i++)
    {
        printf("Element %d: %d\n", i + 1, myArr[i]);
    }
}
//* End Function ..
